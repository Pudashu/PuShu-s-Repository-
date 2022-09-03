#include <stdio.h>
#define LEN 6
int main() {
    const char ch = 'F';
    char ct;
    int i,j;
    for (i=1;i<=LEN;i++){
        for (int j = 0; j < i; j++) {
            ct = ch - j;
            printf("%c",ct);
        }
        printf("\n");
    }
}
