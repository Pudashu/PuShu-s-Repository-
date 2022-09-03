#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define LEN 100
_Bool is_within(const char*, char);
char *s_gets(char *st, int n);

int main() {
    char * finder = NULL;
    char string[LEN];
    char ch;
    printf("Please enter a character that you want to find('|'to quit):");

    if (( scanf("%c",&ch) == 1) && ch != '|') {
        printf("Please type in the string to start the finding progress:\n");
        getchar();
        if ((s_gets(string, LEN)) != NULL) {
            finder = string;
            if (is_within(finder, ch))
                printf("Find it!\n");
            else
                printf("%c not find.\n", ch);
        }
    }
    printf("Done!\n");
    return 0;
}

_Bool is_within(const char* pointer, char ct){
    for (int i = 0; i < LEN ; ++i) {
        if(*(pointer+i) == ct)
            return true;

    }
    return false;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while(getchar()!='\n')
                continue;
        }
    }
    return ret_val;
}