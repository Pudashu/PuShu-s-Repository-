#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 100

void get_n_char(char * str, unsigned n);

int main() {
    char str[LEN];
    unsigned n = 0;
    scanf("%u", &n);
    get_n_char(str, n);
    return 0;

}
void get_n_char(char * str, unsigned n) {
    if (n > LEN) {
        return;
    }
    for(unsigned i = 0; i<n; i++) {
        str[i]=getchar();//
    }
}
