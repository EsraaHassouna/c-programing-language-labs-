#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y){
    printf("x=%d y=%d",x,y);
}



int main()
{
int x=5;
int y=7;
int*ptr1=&x;
int*ptr2=&y;
swap(*ptr2,*ptr1);


    return 0;
}
