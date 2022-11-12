#include <stdio.h>
#include <stdlib.h>

int main(){

char arr[50],copyarr[50],temp[50];
int i=0,j=0;

printf("enter the the string ");
scanf("%s",arr);
//gets(arr);
//fflush(stdin);

for(i=0; '\0'!=arr[i]; i++){
    temp[i]=arr[i];
    }

temp[i]='\0';

for(j=0;'\0'!=temp[j];j++){
    copyarr[j]=temp[j];
    }
copyarr[j]='\0';

printf("the string is %s ",copyarr);

return 0;
}

