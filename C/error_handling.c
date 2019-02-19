/*
errno, perror, strerror, and exit status.

Reference: https://www.tutorialspoint.com/cprogramming/c_error_handling.htm
*/

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main() {
	FILE *pf;

	pf = fopen("nonexist.txt", "rb");

	if (pf == NULL) {
		fprintf(stderr, "Value of errno: %d\n", errno);
		perror("Error opening file");
		fprintf(stderr, "Error opening file: %s\n", strerror(errno));
		exit(EXIT_FAILURE);
	} else {
		fclose(pf);
		exit(EXIT_SUCCESS);
	}
}