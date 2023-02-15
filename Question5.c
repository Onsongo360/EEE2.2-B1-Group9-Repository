#include<stdio.h>

//Printing all numbers of base 16 in lowercase, followed by new line

int main(){
    int num;
    char al;

    for(num = 0; num < 10; num++)
        putchar(num);

   for(al = 'a ' ; al <= 'f' ; ++al)
       putchar(tolower(al));
       putchar('\n');

    return 0;
}
