#include <stdio.h>
#include <stdlib.h>

void alphapet(char a){
    if(a>='a' && a>='A'){
        printf("Alphabet");
    }
    else{
        printf("Not Alphabet");
    }
}

int main()
{   printf("enter character \n");
    char c=getchar();
    alphapet(c);
    return 0;
}
