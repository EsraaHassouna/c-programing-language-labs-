#include <stdio.h>
#include <stdlib.h>

//extended or not extended key

int main()
{
char c=getch();

if(c==-32){
    c=getch();
    printf("extended key %d ",c);
}
else{
    printf("Not extended");

}
    return 0;
}
