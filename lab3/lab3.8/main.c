#include <stdio.h>
#include <stdlib.h>

// multiblication table
int main()
{
    int i=0,j=0;
    for(j=1;j<=9;j++){
            printf("\n");
        for(i=1;i<=9;i++){
            printf("%d * %d = %d \n",i,j,i*j);
        }
    }

    return 0;
}
