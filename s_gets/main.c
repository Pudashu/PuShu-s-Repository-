#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n){
    char * ret_val;
    int i=0;
    fgets(st,n,stdin);
    if (ret_val!=NULL){
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i]== '\n')
            st[i] = '\0';
        else
            while(getchar()!='\n')
                continue;
    }
}