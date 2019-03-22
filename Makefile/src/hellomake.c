/*
The reference uses <hellomake.h> instead of "hellomake.h",
and return(0) instead of return 0.

It worked, but when I changed it to "hellomake.h" and return 0, it failed to
compile.

Perhaps the reference uses an older version of the compiler?
*/

#include "hellomake.h"

int main() {
	// call a function in another file
	myPrintHelloMake();

	return 0;
}