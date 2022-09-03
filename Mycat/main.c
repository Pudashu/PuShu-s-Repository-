#include <stdio.h>

char * mycat(char * restrict alpha ,const char * restrict beta ) {
    int i=0,j=0;
    while (alpha[i])
        i++;
    char * ret = beta;
    while (*beta){
        *alpha++ = *beta++;
    }
    *alpha  ='\0';
    return ret;

}
