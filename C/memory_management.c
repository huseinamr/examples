/*
malloc, realloc, and free.

https://www.tutorialspoint.com/cprogramming/c_memory_management.htm
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char name[100];
	char *description;

	strcpy(name, "Raphtalia");

	/* allocate memory dynamically */
	description = malloc(100 * sizeof(char));

	if (description == NULL) {
		fprintf(stderr, "Error - unable to allocate required memory\n");
	} else {
		strcpy(description, "Raphtalia is a raccoon-type demi-human.");
	}

	/* suppose you want to store bigger description */
	description = realloc(description, 200 * sizeof(char));

	if (description == NULL) {
		fprintf(stderr, "Error - unable to allocate required memory\n");
	} else {
		strcat(description, " She is a very sweet and kind girl.");
		strcat(description, " She can also kill monsters for you.");
	}

	printf("Name: %s\n", name);
	printf("Description: %s\n", description);

	/* release memory using free() function */
	free(description);
}