/*
Calculates the factorial of a given number using a recursive function

Reference: https://www.tutorialspoint.com/cprogramming/c_recursion.htm
*/

#include <stdio.h>

unsigned long factorial(unsigned int i) {
	if (i <= 1) {
		return 1;
	} else {
		return i * factorial(i - 1);
	}
}

int main() {
	int i = 15;
	printf("Factorial of %d is %lu\n", i, factorial(i));

	return 0;
}