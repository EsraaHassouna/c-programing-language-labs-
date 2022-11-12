#include <stdio.h>
#include <stdlib.h>

//remove all except alphabit
int main(){

int i=0;
char str[50];

gets(str);

while('\0'!=str[i]){
    if(str[i]<='a' && str[i]>='z'){
                i++;
    }
}
str[i+1]='\0';
printf("the alphabit in string is %s",str);

    return 0;
}
