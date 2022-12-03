#include<stdio.h>
#include <string.h>

int main(void){
    char *(*p[4])(char *,const char *) = {strcpy,strcat,strtok,NULL};
    char a[80],b[80],*result;
    int choice;
    while(scanf("%d",&choice) == 1 && choice <= 4 && choice >= 1){
        getchar();
        if(choice==4)
            break;
        gets(a);
        gets(b);
        result=p[choice-1](a,b);
        printf("%s\n",result);
    }
    return 0;
}