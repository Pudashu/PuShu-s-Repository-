#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 10
#define LENGTH 100
char *s_gets(char *st, int n);
void change(char *,char *);
int main() {
    char ch;
    char detect;
    char string[LEN][LENGTH];
    printf("please enter 10 strings or type two times ENTER to input:\n");
    for (int i = 0; i < LEN; ++i) {
        printf("The %d one:",i+1);
        s_gets(string[i], LENGTH);
        if(string[i][0]=='\0')
            break;
        }
    printf("Please enter your choice to let the"
           "computer do it!\n");
    printf("a:print all the strings.\n"
           "b:print the strings with the sequence of ASCII\n"/*用strncmp*/
           "c:print the strings by its length.\n"
           "d:print the first word.\n"
           "q to quit\n");


    while (scanf("%c", &ch)== 1) {//怎么把每次循环时的'\n'解决
        if (ch  == '\n')
            continue;
        switch (ch) {
            case 'a':{
                for (int i = 0; i < LEN; ++i) {
                    printf("%s\n", string[i]);
                }
                break;
            }
            case 'b': {
                for (int i = 0; i < LEN - 1; ++i) {
                    for (int j = i + 1; j <= LEN - 1; ++j) {
                        if (strncmp(string[j], string[i], LEN) > 0)
                            change(string[j], string[i]);
                    }
                    for (int a = 0; a < LEN; ++a) {
                        printf("%s\n", string[a]);
                    }

                }
                break;
            }
            case 'c':{
                for (int i = 0; i < LEN - 1;i++) {
                    for (int j = i + 1; j <= LEN - 1; ++j) {
                        if (strlen(string[j]) > strlen(string[i]))
                            change(string[j], string[i]);
                    }
                }
                for (int a = 0; a < LEN; ++a) {
                        printf("%s\n", string[a]);
                }
                break;
            }
            case 'd':{
                for (int b = 0; b < LEN; ++b) {
                    for (int j = 0; j < LENGTH; ++j) {
                        if (ispunct(detect = string[b][j])|| detect == ' ')
                            string[b][j] = '\0';
                    }
                    printf("%s", string[b]);
                }
                break;
            }
            //change函数？

            case 'q':{
                printf("Quit!\n");
                break;
            }
            default: {
                printf("Wrong choice ,please try again!\n");
                break;
            }
        }
    }
    return 0;
}

char *s_gets(char *st, int n) {
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        } else {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}

void change(char * str1,char * str2){
    char * temp;
    temp = str1;
    str1 = str2;
    str2 = temp;
}

//b 和 c