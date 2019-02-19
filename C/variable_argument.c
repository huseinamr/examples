/*
Creating a function with a variable number of arguments.

Reference: https://www.tutorialspoint.com/cprogramming/c_variable_arguments.htm
*/

#include <stdio.h>
#include <stdarg.h>

double average(int num, ...) {
	va_list vl;
	double sum = 0.0;
	int i;

	/* Initialize vl for num number of arguments */
	va_start(vl, num);

	/* Access all the arguments assigned to vl */
	for (i = 0; i < num; i++) {
		sum += va_arg(vl, int);
	}

	/* Clean memory reserved for vl */
	va_end(vl);

	return sum/num;
}

int main() {
	printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
	printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));

	return 0;
}