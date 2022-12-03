#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum = a+b;
    int flag;
    int index,i,rec;
    int put_sum[100];
    if(sum >= 0) flag = 0;
    else flag = 1;
    for(i = 0;i < 6; i++){
        put_sum[i] =abs(sum % 10);
        sum /= 10;
        if(!sum)
            break;
    }
    printf("%c",flag?'-':'\0');
    rec =index =  i;
    while(i >= 0){
        printf("%d",put_sum[i]);

        if (!(index%3)&& i!=0 && rec >= 3) { printf(","); }
        index--;
        i--;
    }
    return 0;
}