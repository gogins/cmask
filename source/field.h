#include "tables.h"
#include "gen.h"
#include "mask.h"
#include "quant.h"
#include "items.h"

#ifndef FIELDHEADER
#define FIELDHEADER

#define PARMAX 50

enum	{CONST = 1, RANGE, MASK, ACCUM, QUANT, GEN, ITEM};

// ************* class parameter  : mehrere Masken, Zeitwerte, Dichte *************

class parameter {
public:
	long		num;				// pfieldnumber
	mask		pmask;			// Maske f�r Parameter
	accum		paccum;			// Maske f�r Parameter
	gen		pgen;				// Generator f�r Parameter
	itemlist pitem;			// Itemliste f�r Parameter
	quantizer pquant;			// Quantizer f�r Parameter
	int		pprec;			// Precision f�r Parameter
	double	pconst;			// konstanter Wert
	int		pcflag;			// Flag f�r konstanten Wert
	int		pgflag, pmflag, paflag, pqflag, piflag;
				
				parameter(void);
	void		clear(void);
	void		setnum(long n) {num = n;}
	void 		setprec(long d);	
	void 		setconst(double x);
	void		setflag(int f);
	void		delflag(int f);
	void 		setrange(double x1, double x2);
	double 	getval(double);			// Errechnen eines Wertes bei Event e
};


class paramliste {
public:
	parameter 	*p;
	long			n;
	double		beginn, ende;

					paramliste(long pn=PARMAX);
					~paramliste();		
	};


#endif
