#include <stdio.h>
#include <stdlib.h>

int main()
{
      int x =0;
      int y =0;
      int z =0;
        printf("Enter first Number ");
        scanf("%d",&x);
        printf("Enter second Number ");
        scanf("%d",&y);
        printf("Enter third Number ");
        scanf("%d",&z);
if(x>y && x>z){
    printf("%d is the largest",x);
}

else if(y>x && y>z){
    printf("%d is the largest",y);
}
else{
    printf("%d is the largest",z);
}
    return 0;
}
