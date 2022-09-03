#include <stdio.h>
#include <string.h>
void stsrt(char * strings[],int n){
    char *temp;
    int top,seek;

    for(top=0;top<n-1;top++)//第一层循环
    {
        for (seek = top + 1;seek < n;seek++)//第二层循环遍历数组
            if(strcmp(strings[top],strings[seek])>0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
    }
}