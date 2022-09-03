#include <stdio.h>
#define LEN 5
int main() {
    int i , j;
    char ch = '$';

    for (int i = 1; i <= LEN; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c",ch);
        }
        printf("\n");
    }
}
