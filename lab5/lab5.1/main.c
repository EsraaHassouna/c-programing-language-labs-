#include <stdio.h>
#include <stdlib.h>

typedef struct Emp_struct{
int id;
int deduction;
int salary;
int bonus;
char name[20];
}Employee;

int main()
{Employee emp1={.id=20180102, .deduction=emp1.salary*0.1, .salary=7000, .bonus=emp1.salary*0.4,.name="Esraa"};
printf("The code of Employee = %d \n", emp1.id);
printf("The Name of Employee = %s \n",emp1.name);
printf("The Salary of Employee = %d \n", emp1.salary=(emp1.salary+emp1.bonus)-emp1.deduction);
return 0;
}
