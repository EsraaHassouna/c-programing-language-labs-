#include <stdio.h>
#include <stdlib.h>
// length
int main()
{
int i=0, count=0;
char str[50];

gets(str);

for(i=0;'\0'!=str[i];i++){
        count++;
}

printf("the length is %d",count);
    return 0;
}
