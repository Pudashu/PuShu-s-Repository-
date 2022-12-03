#include <math.h>
#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    int numrow = 0;
    int numcol = n - 1;
    int reverserow = n - 1;
    int reversecol = 0;
    int count = 1;
    int index = 1;
    int flag = 0;

    int Square[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            Square[i][j] = 0;
        }

    }
    while(index <= pow(n,2))
    {    if(!(flag % 4)){
            for(int i = count-1;Square[numrow][i] == 0 && i < n; i++){
                Square[numrow][i] = index;
                index++;
            }
            numrow++;
            flag++;
            continue;
        }
        if(flag % 4 == 1){
            for(int j = count; Square[j][numcol] == 0 && j < n; j++){
                Square[j][numcol] = index;
                index++;
            }
            numcol--;
            flag++;
            continue;
        }
        if (flag % 4 == 2){
            for(int k = n - 1 - count ; Square[reverserow][k] == 0 && k >= 0;k--){
                Square[reverserow][k] = index;
                index++;
            }
            reverserow--;
            flag++;
            continue;
        }
        if(flag % 4 == 3){
            for(int l = n - 1 - count;Square[l][reversecol] == 0 && l >= 0; l--){
                Square[l][reversecol] = index;
                index++;
            }
            reversecol++;
            flag++;
            count++;
            continue;
        }

    }
    for(int i = 0; i < n;  i++){
        for(int j = 0 ; j < n ;j++){
            printf("%d ",Square[i][j]);
        }
        printf("\n");
    }
}