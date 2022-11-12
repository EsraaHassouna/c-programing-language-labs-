#include <stdio.h>
#include <stdlib.h>

void alphapetCase(char a){

    if(a>='a' && a>='A'){
        if(a>='a' && a<='z'){
            char upper=a-32;
            printf("UpperCase %c ",upper);
        }
    }
    else{
        printf("Not Alphabet");
    }
}


int main(){
printf("enter letter to see it's upper case \n");
char lower = getch();
alphapetCase(lower);

    return 0;
}
