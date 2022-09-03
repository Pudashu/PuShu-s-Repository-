#include <stdio.h>
#define LEN 12

int main() {
    char  *month[LEN] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"} ;
    int i,j;
    for (i=0;i<12;i++) {
        while (scanf("%d", &j) == 1 && j == i + 1)
            printf("%s",month[i]);
    }
    return 0;
}
