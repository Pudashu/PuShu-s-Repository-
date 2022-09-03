#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 100

char * mystrncpy(char *,char *,int);
void eatline();
char * s_gets(char *st, int n);

int main(){
    char source[LEN];
    char target[LEN];
    int i;
    printf("Please enter a string to start the copy:");
    while(s_gets(source,LEN)!= NULL){
        printf("Please enter a number for copy (> 0): ");
        while (scanf("%d", &i) != 1 || i <= 0) {
            eatline();
            printf("Please enter again: ");
        }
        eatline();
        printf("Source string: %s\n", source);
        printf("Target string: %s\n", mystrncpy(target, source, i));
        printf("You can enter a string again (EOF to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

void eatline(void){
    char ch;
    while ((ch = getchar() != '\n' && ch != '\0' && ch != EOF))
        continue;
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
            eatline();
        }
    }
    return ret_val;
}

char * mystrncpy(char *str1,char *str2, int n){
    int i,j = 0;
    for (i;i < LEN ;i++ ) {
        if (str1[i] == '\0')
            str1[i] = ' ';
        for (j; j < n && i < LEN-1 ; j++) {
            str1[i+1] =str2[j];
        }
    }
    if(str1[i]) {
        str1[i] = '\0';
    }
}