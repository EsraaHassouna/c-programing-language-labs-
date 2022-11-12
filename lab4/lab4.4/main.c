#include <stdio.h>
#include <stdlib.h>

int main()
{
char firstname[50],lastname[50],fullname[100];
int i=0,j=0;

printf("enter first name ");
//scanf("%s",firstname); only take the first name and crach the program
gets(firstname);
fflush(stdin);

printf("enter last name ");
fgets(lastname,20,stdin);

for(i=0;'\0'!=firstname[i] ;i++){
    fullname[i]=firstname[i];
    }

fullname[i]=' ';
i++;
for(j=0;'\0'!=lastname[j];j++){
    fullname[i+j]=lastname[j];
    }
fullname[j+i]='\0';


printf("the full name %s",fullname);

return 0;
}
