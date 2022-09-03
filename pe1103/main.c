#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc ,char *argv[]){
    int index = 0 ;
    int ch;
    int *input;
    if (argc > 2)
    {
        printf("Fault in reading the input");
    }
    else if (argv [1][0] != '-'){
        printf("wrong inputs"
               "!");
    }
    else if (*(*(argv+1)+1) == 'p' || argc == 1){
        while ((ch = getchar()) != EOF ){
            input[index] = ch;
            index++;
        }

    }
    else if (*(*(argv+1)+1) == 'u') {
        while ((ch = getchar()) != EOF) {}
        input[index] = isupper(ch);
        index++;
    }
    else if (*(*(argv + 1)+1) == 'l'){
        while ((ch = getchar()) != EOF) {}
        input[index] = islower(ch);
        index++;
    }
    printf("%s",input);
}