#include <stdio.h>
#include <string.h>
#define LEN 10
char * getnchar(char * , int);

int main(){
    char * rubb[LEN];
    char *check;
    check = getnchar(rubb,LEN-1);
    if (check == NULL)
        puts("Input failed!");
    else
        puts(rubb);
    puts("Done\n");
    return 0;
}

char * getnchar(char * str, int n ){
    int i;
    char ch;
    /*for(i=0; i < n; i++){
        ch = getchar();
        if(ch != EOF)
            str[i]= ch;
        else
            break;
    }
    if (ch == EOF)
        return NULL;
    else {
        str[i]='\0';
        return str;
    }*/
    for (int i = 0; i < n; i++){
        ch = getchar();
        if(ch==EOF)
            return NULL;
        while (ch != EOF){
            if (ch != '\0'&& ch != '\n' && ch!= '\t')
                str[i]=ch;
            else
                return str;
        }


    }
}
