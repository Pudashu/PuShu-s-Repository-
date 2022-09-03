#include <stdio.h>
#include <string.h>
#define LEN 10
char * back(char *,char *);
char * s_gets(char*,int n);
int main() {
    char ar1[LEN];
    char ar2[LEN];
    char * allo;
    printf("Please enter the first words:");
    s_gets(ar1,LEN);
    printf("Then the second:");
    s_gets(ar2,LEN);
    allo=back(ar1,ar2);
    printf("%c, is the character!",*allo);
    return 0;
}

char * back(char * str1 ,char * str2){
    //1.一一对应
    int i=0;
    char ct;
    char *giveback;
        while(str1[i]!=str2[i] && str1[i]!='\0')
            i++;
        if (str1[i] == str2[i])
        {
            ct = str1[i];
            giveback = &ct;

            return giveback;
        }
        else
            return NULL;

}


char * s_gets(char * str,int n){
    int i;
    char * ch;
    ch = fgets(str,n,stdin);

    if (ch){
        while(str[i]!='\n' && str[i]!='\0')
            i++;
        if(str[i]=='\n')
            str[i]='\0';
        else
            while((getchar())!='\n')
                continue;
    }
    return ch;

}


