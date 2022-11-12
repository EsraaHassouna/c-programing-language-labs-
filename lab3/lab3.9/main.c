#include <stdio.h>
#include <stdlib.h>
void alpabit(char);

int main()
{


    char str[30];
    str[20]=getchar();
    alphabit(str);

return 0;
}

void alphabit(char str[30])
{
    int count=0,word=1;

    do{
        count++;
        if(str[count]==' ')
        {
            count--;
            word++;
        }
    }while(str[count]!='\0');
printf("No. of words %d \n No. of charachter %d \n",word,count--);
}
