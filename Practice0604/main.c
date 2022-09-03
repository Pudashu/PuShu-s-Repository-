#include <stdio.h>
#define LEN 6
#define ALPHA 26
int main() {
    char ch = 'A';
    char alpha[ALPHA];
    static char *pointer;
    int i , j ;

    for (i = 0; i < ALPHA; ++i) {
        alpha[i]= ch + i;
    }

    int index = 0;

    for ( i = 1; i < LEN; ++i) {

        for (j = 0; j < i; j++) {

            pointer = alpha + index;
            printf("%c", *pointer);
            index++ ;
        }
        printf("\n");

    }
    return 0;
}
