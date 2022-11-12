#include <stdio.h>
#include <stdlib.h>
//frequency
int main(){

int i=0,counter=0;
char arr[50];

printf("Enter the string ");
scanf("%[^\n]s",arr);
//printf("%s",arr);
printf("Enter the charachter to get it's frequency ");
char c=getche();

i=0;
while('\0'!=arr[i]){
    if (c==arr[i]){
        counter++;
    }
    i++;
}
printf("\nthe frequency of %c is %d ",c,counter);

    return 0;
}
