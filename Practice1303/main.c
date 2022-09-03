#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    int ch;
    FILE *origin, *copy;
    char word[2];

    printf("Please Enter two files name to start the program!\n");
    scanf("%5s", word[0]);
    getchar();
    scanf("%5s",word[1]);
    getchar();
    if ((origin = fopen(word, "r")) == NULL){
        printf("Error in opening the sourcefile.\n");
        exit(EXIT_FAILURE);
}
    if((copy= fopen(word+1,"w"))==NULL){
        printf("Error in opening the targetfile.\n");
        exit(EXIT_FAILURE);
    }
    while(ch = getc(origin)!=EOF) {
        ch = isupper(ch);
        putc(ch, copy);
    }
    if (fclose(origin)!=0)
        printf("Error in closing the sourcefile!\n");
    if(fclose(copy)!=0)
        printf("Error in closing the targetfile!\n");


    return 0;
}
