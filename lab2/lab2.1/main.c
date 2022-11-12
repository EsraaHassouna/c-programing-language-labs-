#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x =0;
   printf("Enter Number ");
   scanf("%d",&x);
   if(x<0){
    printf("Negative");
   }
   else if(x>0){
    printf("Positive");
   }
   else if(x==0){
    printf("Zero");
   }
   else{
    printf("Error");
   }
    return 0;
}
