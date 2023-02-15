#include<stdio.h>

//printing alphabets in lowercase, then uppercase, followed by new line.

int al;


int main(){
    for (al = 'a' ; al <= 'z' ; ++al)
    putchar(al);

for (al = 'a' ; al <= 'z' ; al++)
    putchar(toupper(al));
    putchar('\n');

    return 0;

}
