#include <stdio.h>
#include <stdlib.h>

//function takes 3 numbers from the user as a parameter and return max
int max(int first, int second, int third){
    if(first>=second && first> third){
            return first;
    }
    if(second>=first && second>=third){
            return second;
    }
    if(third>=first && third>=second){
            return third;
    }
}
int main()
{
    int x,y,z;
    printf("Enter number");
    scanf("%d",&x);

    printf("Enter number");
    scanf("%d",&y);

    printf("Enter number");
    scanf("%d",&z);
    printf("the max = %d",max(x,y,z));
    return 0;
}
