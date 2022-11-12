#include <stdio.h>
#include <stdlib.h>
#define size 4

void scanArray(int *ptr);
void displayArray(int *ptr);

int main()
{
    int i=0;
    int arr[size]={0,1,2,3};
    int *ptr=arr[size];

    for (i=0;i<size;i++){
        displayArray(*arr);
    }
    return 0;
}
/*void scanArray(int *ptr){
    int y=0;
    ptr=&y;
    printf("enter the numbers \n");
    scanf("%d",y);
}
*/
void displayArray(int *ptr){
printf("the arr is %d - ",*ptr);
}
