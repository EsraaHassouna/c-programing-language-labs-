#include <stdio.h>
#include <stdlib.h>
#define size 5
typedef struct Emp_struct{
int id;
int deduction;
int salary;
int bonus;
char name[20];
}Employee;


int main()
{
Employee emp[size];
int i=0;
for (i=0;i<5;i++){
    printf("enter name ");
    scanf("%s",emp.name);

    printf("enter id ");
    scanf("%d",emp.id);

    printf("enter salary ");
    scanf("%d",emp.salary);

    printf("enter bonus ");
    scanf("%d",emp.bonus);

    printf("enter deduction ");
    scanf("%d",emp.deduction);

}
    return 0;
}
