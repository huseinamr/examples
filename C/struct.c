/*
Defining a Structure, Accessing Structure Members, using
Structures as Function Arguments, and using Pointers to
Structures

Reference:
https://www.tutorialspoint.com/cprogramming/c_structures.htm
*/

#include <stdio.h>
#include <string.h>

struct Books {
	char title[50];
	char author[50];
	char subject[100]; // why is it longer than the title, why?
	int book_id;
};

/* function declaration */
void printBook(struct Books *book);
int main() {
	struct Books Book1; /* Declare Book1 of type Book */

	/* book 1 specification */
	strcpy(Book1.title, "C Programming");
	strcpy(Book1.author, "Nuha Ali");
	strcpy(Book1.subject, "C Programming Tutorial");
	Book1.book_id = 6495407;

	/* print Book1 info by passing address of Book1 */
	printBook(&Book1);

	return 0;
}

void printBook(struct Books *book) {
	printf("Book title: %s\n", book->title);
	printf("Book author: %s\n", book->author);
	printf("Book subject: %s\n", book->subject);
	printf("Book book_id: %d\n", book->book_id);
}