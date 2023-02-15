#include<stdio.h>

//Printing alphabets in lower case followed by new line, except q & e.
int main(){

    char let;

    for (let = 'a' ; let <= 'z'; ++let)
{

         if (let != 'e' && let != 'q')
             putchar(let);
    }
    putchar('\n');

    return 0;

}
