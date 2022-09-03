#include <stdio.h>
#include <ctype.h>
char * getaword(char *);
int main() {
    const int LEN = 10;
    char wordy[LEN];
    char *check;

    check = getaword(wordy);
    if (check == NULL)
        puts("wrong input\n");
    else
        puts(wordy);

    return 0;
}

char *getaword(char * str){
//1.跳过空格
    char * search = str;
    char ch;
    while((ch= getchar()) != EOF && isspace(ch))
        continue;
    if (ch == EOF)
        return NULL;
    else
        *str++ = ch;
    //2.获取剩余字符
    while((ch= getchar()) != EOF && !isspace(ch))
        *str++ = ch;
    *str = '\0';
    if (ch == EOF)
        return NULL;
    else{
        while((ch=getchar())!='\n')
            ch = getchar();
        return search;
    }
}

