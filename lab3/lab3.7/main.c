#include <stdio.h>
#include <stdlib.h>

void cubeNum(int num){
    int i=0;
/*
    for(i=0;i<3;i++){
        num*=num;
    }
    printf("the cub of number = %d",num);
  */
    printf("the cub of number = %d",num*num*num);
}

int main()
{
    int x=0;
    printf("enter number ");
    scanf("%d",&x);
    cubeNum(x);

    return 0;
}
