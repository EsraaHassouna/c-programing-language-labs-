#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    int b;
    int sum;
    int mul;
    int sub;
    float div;
    printf("Please enter the first number");
    scanf("%d",&a);
    printf("Please enter the second number");
    scanf("%d",&b);

    printf("The sum = %d \n",sum= a+b);
    printf("The multiblication = %d \n ",mul= a*b);
    printf("The subtraction = %d \n",sub= a-b);
    printf("The division = %f \n",div= (float
                                        )a/b);

    return 0;
}
