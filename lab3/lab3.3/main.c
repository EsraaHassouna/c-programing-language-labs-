#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

int main()
{
    //enter the size, number of rows
    int row=0,col=0;
    int size=0;
    printf("Enter Box size");
    scanf("%d",&size);
    //enter the size of the Magic Box
    printf("\n");

    int i=0;
    col=(size+1)/2;

printf("%d",gotoxy(col,row));
    while(i<=size){
      //  printf();
        if(i%size==1){
            row++;
            printf("%d",gotoxy(col,row));
        }
        else if(i%size==0){
            row--;
            col--;
            printf("%d",gotoxy(col,row));
            if (row==0){
                row=size;

            }if (col==0){
                col=size;
            }
        }

    }
        return 0;
}

