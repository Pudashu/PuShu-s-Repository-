#include <stdio.h>
#define JUDGE_NEGATIVE_OR_NOT(X) \
    ((X) < 0 ? printf("NEGATIVE") : \
    ((X) == 0) ? printf("ZERO") : \
    printf("POSITIVE"))

int main()
{
    unsigned char ch1 = -1;
    char ch2 = -1;
    char ch3 = -1;
    // ORIGINAL CODE OF 1: 0000 0001B
    // ONES' COMPLEMENT OF 1: 1111 1110B
    // TWO'S COMPLEMENT OF -1: 1111 1111B
    printf("unsigned char ch1 = 0X%X, %d, ",ch1 , ch1 ),
            JUDGE_NEGATIVE_OR_NOT(ch1), printf("\n");
    printf("char ch2 = 0X%X, %d, ", ch2, ch2), JUDGE_NEGATIVE_OR_NOT(ch2),
            printf("\n");
    printf("signed char ch1 = 0X%X, %d, ", ch3, ch3), JUDGE_NEGATIVE_OR_NOT(ch3),
            printf("\n");
    return 0;}

