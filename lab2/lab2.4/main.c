#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z =0;
    printf("Enter Grade ");
    scanf("%d",&z);
    if(z>=85 && z<=100){
        printf("Excellent");
    }
    else if(z>=75 && z<85){
        printf("Very Good");
    }
    else if(z>=65 && z<75){
        printf("Good");
    }
    else if(z>=50 && z<65){
        printf("pass");
    }
    else if(z>=0 && z<50){
        printf("Fail");
    }
    else
        printf("Error");
    return 0;
}
