#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int num=0;
    while(sum<100){
        printf("Enter numbers you want to sum ");
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("The Sum Now Exceeds 100 = %d",sum);
    return 0;
}
