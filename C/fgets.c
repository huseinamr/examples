/*
When fgets reach the end of the file, it returns a NULL.

Reference:
https://www.tutorialspoint.com/cprogramming/c_file_io.htm
https://www.tutorialspoint.com/c_standard_library/c_function_fgets.htm
*/

#include <stdio.h>

int main() {
	FILE *fp;
	char buff[255];
	int i;

	fp = fopen("/tmp/test.txt", "r");
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	i = 2;
	while (fgets(buff, 255, (FILE*)fp) != NULL) {
		printf("%d: %s\n", i, buff);
		i++;
	}

	return 0;
}