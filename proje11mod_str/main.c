#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);



int main() {
    char line[LIMIT];
    char * find;
    puts("Please enter a line:");
    fgets(line,LIMIT,stdin);
    find= strchr(line,'\n');
    if(find){
        *find = '\0';
    }//利用fgets和strchr实现s_gets()函数功能
    ToUpper(line);
    puts(line);
    printf("That line has %d punctuation characters.", PunctCount(line));

    return 0;
}

void ToUpper(char * string){
    while(*string)
        if(islower(*string))
        {
            *string = toupper(*string);
            string++;
        }
        else
            string++;
}

int PunctCount(const char * string){
    int i = 0;
    while(*string){
        if(ispunct(*string))
            i++;
        string++;

    }
    return i;
}
