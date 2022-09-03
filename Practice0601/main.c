#include <stdio.h>
#define ALPHA 26
int main() {
    char lower[ALPHA];
    int i;
    char ch;
    for (i = 0;i<ALPHA;i++)
        lower[i]='a'+i;
    for (i = 0; i <=ALPHA; i++) {
        ch = lower[i];
        printf("%c\n",ch);

    }
    printf("Done!\n");
    return 0;
}
