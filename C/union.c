/*
"Now let's look into the same example once again where we will use one
variable at a time which is the main purpose of having unions."

Reference:
https://www.tutorialspoint.com/cprogramming/c_unions.htm
*/

#include <stdio.h>
#include <string.h>

union Data {
	int i;
	float f;
	char str[20];
};

int main() {
	union Data data;

	data.i = 10;
	printf("data.i: %d\n", data.i);

	data.f = 220.5;
	printf("data.f: %f\n", data.f);

	strcpy(data.str, "C Programming");
	printf("data.str: %s\n", data.str);

	return 0;
}