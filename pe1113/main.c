#include <stdio.h>
#include <string.h>


int main(int argc , char *argv[]) {
    char * collection[argc];
    for (int i = 0; i < argc; ++i) {
        collection[i]= argv[i];
    }
    if (argc < 2)
        printf("wrong input!\n");
    else{
        printf("Words are:");
        for(int i = 0; i < argc ;i++){
            printf("%s",collection[i]);
        }
        printf("Reverse words are:");
        for(int i = argc - 1;i >= 0 ;i-- ){
            printf("%5s",collection[i]);
        }    }

    return 0;
}
