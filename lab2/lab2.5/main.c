#include <stdio.h>
#include <stdlib.h>

int main()
{
      printf("please enter + or - or * or / for the operation you want to make ");
      char opration=0;
      opration=getchar();
      int x =0;
      int y =0;
      int operation =0;
      printf("Enter first operand ");
      scanf("%d",&x);
      printf("Enter second operand ");
      scanf("%d",&y);
     // printf("please enter + or - or * or / for the operation you want to make ");
    //  char opration=0;
      //opration=getchar();
      //scanf("%c",&opration);
      switch(opration){
        case '+':
            printf("sum = %d ",x+y);
            break;
        case '-':
            printf("minus = %d ",x-y);
            break;
        case '*':
            printf("multiplication = %d ",x*y);
            break;
        case '/':
            printf("division = %d ",x/y);
            break;
        default:
            printf("Not Found please enter + or - or * or /");


      }

    return 0;
}
