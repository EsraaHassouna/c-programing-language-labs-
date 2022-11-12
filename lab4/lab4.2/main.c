#include <stdio.h>
#include <stdlib.h>
#define Null


int main(){

char continueKey = getche();
int i=0,j=0;
char str[40];

    do{
      str[i]=getch();
        if(str[i]!=13){
            i++;
        }
    }while(str[i]!=13);

    str[i]='\0';

    printf("%s\n",str);



return 0 ;
}




/*



return 0;
}

void length(char c){

    int i=0,j=0;
    char str[30];

    do{
      str[i]=getche();
        if(str[i]!=13){
            i++;
        }
    }while(str[i]!=13);

    str[i]='\0';
    printf("\n%s \n ",str);


}



*/

















/*
int main(){

    int i=0;
    char str[30];
    while(str[i]!='\n'){
       str[i]= getchar();
       i++;
    }
    printf("if you want to continue press c \n");
    if(str[i]=='c'){
        str[i]= getchar();
        while(str[i]!='\n'){
           str[i]= getchar();
           i++;
        }
    }
    else{
        str[i]='\0';
        printf("the string is \n %c \n",str[i]);
}

return 0;
}


*/
/*
int main(){

    int i=0;
    char str[30]={};
    while(str[i]!='\n' && str[i]=='c'){
       str[i]= getchar();
       i++;
       printf("if you want to continue press c");

    }
    str[i]='\0';
    printf("the string is \n %c",str[i]);



return 0;
}
*/
