#include <stdio.h>
#include <stdlib.h>

int main(int argc,char argv[]) {
    int byte;
    FILE *origin;
    FILE *copy;

    if (argc != 3){
        printf("Usage：%s sourcefile targetfile\n",argv[0]);
        exit(EXIT_FAILURE);
    }
    if((origin= fopen(argv[1],"rb") )==NULL){
        printf("Error in opening the sourcefile.\n");
        exit(EXIT_FAILURE);

    }
    if((copy= fopen(argv[2],"wb"))==NULL){
        printf("Error in opening the targetfile!\n");
        exit(EXIT_FAILURE);
    }
    while (byte = getc(origin)!=EOF){
        putc(byte,copy);
    }

    if (fclose(origin)!=0)
        printf("Error in closing the sourcefile!\n");
    if(fclose(copy)!=0)
        printf("Error in closing the targetfile!\n");

    return 0;
}
