# include <stdio.h>
#include <string.h>
char * strnins(char * t, char *s,int n);

int main(){
    char t[100];
    char s[100];
    int n;
    scanf("%s",t);
    getchar();
    scanf("%s",s);
    getchar();
    scanf("%d",&n);

    printf("%s",strnins(t,s,n));
}

char * strnins(char * t ,char *s,int n) {
    int index;
    char *ret_val = t;
    char *p = s;
    while (*p != '\0')
        p++;
    index = n;
    t += index;
    while ((*p++ = *t++) != '\0');
    *p = '\0';
    strcpy(ret_val + n, s);
    return ret_val;

}