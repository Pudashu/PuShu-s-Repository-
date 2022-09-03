#include <stdio.h>
#include <stdlib.h>
#define N 10
#define LEN 1000

int main(void)
{
    int i, temp, a[N + 1];
    unsigned int seeds;

    for (seeds = 1; seeds <= N; seeds++)
    {
        printf("Time #%d:\n", seeds);
        srand(seeds);//不同的种子
        for (i = 0; i < N + 1; i++)
        {
            a[i] = 0;
        }//初始化计数器
        for (i = 0; i < LEN; i++)
        {
            temp = rand() % 10 + 1;
            a[temp]++;
        }//把每个数字变为数组进行计数
        for (i = 1; i < N + 1; i++)
        {
            printf("%-3d appeared %d times.\n", i, a[i]);
        }
        printf("Total random numbers: %d\n\n", LEN);
    }

    return 0;
}
