#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int option=0;

//    getchar();
//    char option = getchar();
    printf("1- Hello \n");
    printf("2- Exit\n");
    printf("3- Play\n");

    printf("Select from the menu ");
    scanf("%d",&x);

    switch(option){
        case 1:
            printf("1- Hello");
            break;

        case 2:
            printf("2- Exit");
            break;

        case 3:
            printf("3- Play");
            break;

        default:
            printf("Not found in menu");
            break;
    }
    system(clr);
    return 0;
}
