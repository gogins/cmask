# CMask
written by Andre Bartetzki <andre@bartetzki.de>

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
4. License has been changed from GPL to MPL 2.0 with the permission of the author.


