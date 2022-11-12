#include <stdio.h>
#include <stdlib.h>
#define size 4

void scanArray(int *ptr);
void displayArray(int *ptr);

int main()
{
    int i=0;
    int arr[size];
    int *ptr=&arr;

    for (i=0;i<size;i++){
      printf("enter the array elements ");
      scanf("%d",&arr[i]);
    }

    for (i=0;i<size;i++){
      printf("the array elements %d \n",*ptr);
      ptr++;
      }

    return 0;
}
