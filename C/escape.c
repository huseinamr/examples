/*
Reference:
https://www.tutorialspoint.com/cprogramming/c_constants.htm
(and a stackoverflow thread, I can't find the link)
*/

#include <stdio.h>

int main() {
    /* Common escape sequences */
    printf("\\ \' \"\n");

    /* \b moves the cursor back one space */
    printf("foo\bbar\n");

    /* \r moves the cursor back to the beginning of the line */
    printf("foo\rbar\n");

    return 0;
}