# CMask
Written by Andre Bartetzki <andre@bartetzki.de>

This software is published under MPL 2.0 terms, see file LICENSE.

This is software with ABSOLUTELY NO WARRANTY.

Use it at your OWN RISK. 

For manual, examples, old binaries etc. see
http://www.bartetzki.de/de/software.html

## Notes regarding this version

This version of Cmask hosted at http://github.com/kunstmusik/cmask has been updated to compile with newer C++ compilers. The following changes were done compared to the original:

1. "#include <iostream.h>" has been updated to "#include <iostream>"
2. "using namespace std;" has been added to globals.h
3. D_IRIX is defined for the build in globals.h, making the build suitable for Linux.  Users compiling cmask for other platforms will have to change what platform is defined in globals.h. 
4. License has been changed from GPL to MPL 2.0 with the permission of the author; 
```
Andre Bartetzki
Mar 29 (6 days ago)
to me, Steven 
> Am 27.03.2018 um 22:44 schrieb Michael Gogins <michael.gogins@gmail.com>:
>
> I am looking into various code and libraries in C or C++ for
> algorithmic composition that I would like to build for WebAssembly and
> include in the WebAssembly module of csound_extended.js. This will
> also include at least my C++ algorithmic composition library CsoundAC.
>
> I would like to use CMask in this way. It has a long history of being
> used with Csound.
>
> However, the license for CMask is GPL which, for this purpose, is not
> consistent with the LGPL 2.1 license of both Csound and CsoundAC.
>
> Could you please change the license to Mozilla Public License 2.0
> (https://www.mozilla.org/en-US/MPL/2.0/,
> https://www.mozilla.org/en-US/MPL/2.0/FAQ/) which is compatible with
> both GPL and LGPL, or add an exception to your existing license for
> static linking with extended-csound, or provide a dual license (both
> LGPL and GPL)?
>
> This would be greatly appreciated, and probably increase the number of
> users of CMask, which would then run in Web browsers.


Dear Mike,

OK, no problem, I will change the license within the next days to MPL ...


best

Andre

--------------------------------------------------
Andre Bartetzki
http://www.bartetzki.de
mailto:andre@bartetzki.de

home  +49 - (0)30 - 92375877
mobil  +49 - (0)1577 - 5340084

--------------------------------------------------
```

