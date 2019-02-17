/*
Stringize (#), when used within a macro definition, converts a macro
parameter into a string constant.
The token-pasting operator (##) within a macro definition combines
two arguments.

Reference:
https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm
*/

#include <stdio.h>

#define tokenpaster(n) printf("token" #n " = %d\n", token##n)

int main() {
	int token34 = 40;
	tokenpaster(34);
	return 0;
}