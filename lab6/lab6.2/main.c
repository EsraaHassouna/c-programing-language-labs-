#include <stdio.h>
#include <stdlib.h>

int power(int x, int powerOf);

int main()
{
    int no=1;
    int powerOf=2;

    printf("enter the number to git it's power");
    scanf("%d",&no);

    printf("enter the number power");
    scanf("%d",&powerOf);

    printf("the power of %d is %d",no,power(no,powerOf));
    return 0;
}

int power(int x, int powerOf){

    while(powerOf > 0){
        x*=power(x,powerOf-1);
    }
    return x;
}
