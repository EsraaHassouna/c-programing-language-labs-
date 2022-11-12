
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#define Active_ROW 2
typedef struct Employee{
    int id;
    char name[20];
}Employee;//4Byte +20 Byte --> 24Byte
int main()
{
//    int x=0;
//    int * ptr =&x;
//    int ** ptr2=&ptr;
    //*x

   // **ptr2=20;
   // *ptr2=20;
    //printf();
   // int arr[10];
   // Employee * ptr=(Employee *)malloc(10*sizeof(Employee));
   //DataType Array [];

   Employee * arr [SIZE];//Array of Pointer //Stack //ROWS
   int i=0,j=0;
   int col=0;
   printf("Enter Number of Col : ");
   scanf("%d",&col);
   for(i=0; i<Active_ROW; i++){
        arr[i]=(Employee *)malloc(col*sizeof(Employee));//Heap  //Col
   }
   //For Loop Scan
   for(i=0; i<Active_ROW; i++){
         for(j=0; j<col; j++){
                printf("Enter ID [%d] [%d] : ",i,j);
                scanf("%d",&(arr[i][j].id));
                printf("Enter Name [%d] [%d] : ",i,j);
                scanf("%s",arr[i][j].name);
        }
   }

  for(i=0; i<Active_ROW; i++){
         for(j=0; j<col; j++){
                printf("ID [%d] [%d] = %d \n ",i,j,arr[i][j].id);
                printf("Name [%d] [%d] = %s \n",i,j,arr[i][j].name);
        }
   }
   //1000 * 8

    return 0;
}
