#include <stdio.h>
#include <stdlib.h>
#define col 2
typedef struct Student{
    char cources[50];
    int degree;
    float avg;
}Student;

int main(){

int size=0, i=0, j=0, k=0;

printf("Enter no of students ");
scanf("%d",&size);
Student * arrPtr[size];

for(k=0;i<size;i++){
      arrPtr[i]=(Student *)malloc(col*sizeof(Student));//numbers of columns
}
for(i=0;i<size;i++){
    for(j=0;j<col;j++){
        scanf("%d",&arrPtr.degree);
        scanf("%s",arrPtr.cources);
        scanf("%f",&arrPtr.avg);
}}
    return 0;
}
