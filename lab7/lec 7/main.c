#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
char c=0;
char arr[50]={};

while(c!='\n'){
    arr[i]=getche();
    i++;
}
printf("%s",arr);
    return 0;
}
