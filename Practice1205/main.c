#include <stdio.h>
#include <stdlib.h>
#include "pe12-5a.h"
#include <string.h>
#define LEN 100

int main() {
    int numbers[LEN];
    int i;
    for(i = 0;i <= LEN - 1 ;i++){
        numbers[i] = rollem(LEN);
    }
    stsrt(numbers,LEN);
    for(i= 0 ; i <= LEN;i++)
        printf("%3d",numbers[i]);
    return 0;
}

int rollem(int n){
    int roll;
    roll = (rand()) % n + 1 ;
    return roll;
}

void stsrt (int * ar, int n){
    int temp;

    for (int top = 0; top < n-1; ++top) {
        for (int seek = top + 1; seek < n ; ++seek) {
            if((ar[top]- ar[seek]) < 0){
                temp = ar [top];
                ar[top]= ar [seek];
                ar [seek] = temp;
            }
        }

    }
}

