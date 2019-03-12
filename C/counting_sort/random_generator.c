#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	int i, N;
	time_t t;

	if (argc == 3) {
		/* Read the value of N */
		N = strtol(argv[1], NULL, 10);

		/* Open output file */
		fp = fopen(argv[2], "w");

		/* Write the value of N to output file */
		fprintf(fp, "%d\n", N);

		/* Initializes random number generator */
		srand((unsigned)time(&t));

		/* Produces random values N times and write it to output file */
		for (i = 0; i < N; i++) {
			fprintf(fp, "%d\n", rand() % 1000000); /* segfault at 2-3 million */
		}

		/* Close output file */
		fclose(fp);
	} else {
		printf("Usage: random_generator [N] [output file]\n");
	}

	return 0;
}