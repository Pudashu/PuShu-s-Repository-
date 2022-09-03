#include <stdio.h>
#include <ctype.h>
#define LEN 26
int main() {
    int ch = 'a',ct;
    char alpha[LEN];
    for(int i = 0; i <= 26 ; i++){
        alpha[i] = ch + i;
    }
    while((ct=getchar()) != EOF ){
        if(isalpha(ct))
            for (int i = 0; i < 26; ++i) {
                if(ct == alpha[i])
                    printf("%5d", i+1);
            }
        else
            printf("%5d", EOF);
    }
    return 0;
}
