/*
Macros defined by ANSI C.

Reference:
https://www.tutorialspoint.com/cprogramming/c_preprocessors.htm
*/

#include <stdio.h>

int main() {
	printf("File: %s\n", __FILE__); // Current filename
	printf("Date: %s\n", __DATE__); // MMM DD YYY
	printf("Time: %s\n", __TIME__); // HH:MM:SS
	printf("Line: %d\n", __LINE__); // Current line number
	printf("ANSI: %d\n", __STDC__); // Compiler complies with ANSI?

	return 0;
}