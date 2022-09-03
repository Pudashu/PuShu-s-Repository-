#include <stdio.h>
#include <stdbool.h>
#define LEN 80

_Bool is_within(char,char*);
char * s_gets(char*,int);
int main(){
    int check;
    int ch;
    char word[LEN];
    printf("Please enter a string：");
    while(s_gets(word,LEN) && word[0] != '\0') {
        printf("please enter a character:");
        ch = getchar();
        while(getchar()!='\n')
            continue;
        check = is_within(ch,word);
        if (check)
            printf("the character %c is in the string!",ch);
        else
            printf("the character %c isnt in the string!\n",ch);
        printf("Next string:\n");
    }
    printf("Done\n");
}

_Bool is_within(char ct,char* strd){
    int i = 0;
    while(strd[i]!='\0' && ct !=strd[i])
        i++;
    if(ct == strd[i])
        return true;
    else
        return false;
}

char * s_gets(char * str,int n){
    int i;
    char * ret_val;

    ret_val = fgets(str,n,stdin);
    if (ret_val){
        while(str[i]!='\n'&&str[i]!='\0')
            i++;
        if (str[i]=='\n')
            str[i]='\0';
        else{
            while (getchar()!='\n')
                continue;
        }
        return ret_val;
    }
}