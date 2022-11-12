#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"
//menu game

int main()
{
    int choice=0,key=0,end=1;
    printf("start");

    // up and down arrows for choices
    if(key==80 || key ==72){

        // conditions for upper and lower extended keys
        if(choice==0 && key==80){
                choice=1;
            printf("favourits \n\n");
        }
        else if(choice==1 && key==80){
                choice=2;

            printf("study \n\n");
        }
        else if(choice==2 && key==80){
                choice=0;
            printf("Data \n\n");

        }
        else if(choice==0 && key==72){
                choice=2;
        }

        else if(choice==1 && key==72){
                choice=0;
        }

        else if(choice==2 && key==72){
                choice=1;
        }
    }
    else
        end=0;//flag
return 0;
}
