#ifndef TABHEADER
#define TABHEADER

//#define TPMAX 50	// Maximale Anzahl Tabellenpunkte
	
// ************* class table  : Tabelle f�r Polygone *************
class table {
protected:
	long	M;							//maximale Anzahl Wertepaare (csound max 150)
	long	N;							//reale Anzahl Wertepaare
	double	*x, *y;				//Arrays f�r Horiz. und Vertikalwerte	
	double	iplval;				//Exponent f�r Interpolation
	long	iplflag;					//Interpolation aus? 1=an, 0=aus, 2=half-cosine
public:
			table(double*, double*, long);				
			~table();					//Speicher freigeben
	//void	size(long z=1);			//Speicher reservieren
	//void	create(double*, double*, long); 
	void	setipl(double a=0.0, long b=1); //Interpolationswerte setzen
	void	set(double ,double);		//neues Wertepaar setzen
	void	unset(long);				//Wertepaar l�schen
	void	change(long,double,double); //Wertepaar �ndern
	void	clear(double v=0.5);		//Tabelle r�cksetzen auf standard
	void	print(void);				//Tabellenwerte ausdrucken
	double	getval(double);				//interpolierten Wert lesen
	};

// ************* class table  : end                  *************


// ************* class table2  Tabelle f�r 2 Segmentfunktionen     *************
class table2 {
protected:
	long	M;							//maximale Anzahl Wertepaare (csound max 150)
	long	N;							//reale Anzahl Wertepaare
	double	*x, *y1, *y2;
	double	iplval;						//Exponent f�r Interpolation
	long	iplflag;					//Interpolation aus? 1=an, 0=aus

public:
			table2(long z=1);			//Speicher reservieren
			~table2();						//Speicher freigeben
	//void	size(long z=1);			//Speicher reservieren
	void	create(double*, double*, double*, long); 
	void	setipl(double a=0.0, long b=1); //Interpolationswerte setzen
	void	set(double ,double, double);	//neues Wertetripel setzen
	void	unset(long);					//Wertetripel l�schen
	void	change(long,double,double,double); //Wertepaar �ndern
	void	clear(double v1=0.0, double v2=1.0); //Tabelle r�cksetzen
	void	print(void);					//Tabellenwerte ausdrucken
	void 	getvals(double, double*, double*); //interpol. Werte lesen
	//double	getval1(double);				//interpolierten 1.Wert lesen
	//double	getval2(double);				//interpolierten 2.Wert lesen
	};
// ************* class table2  : end                  *************

#endif