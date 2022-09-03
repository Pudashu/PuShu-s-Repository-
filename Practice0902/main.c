#include <stdio.h>

void chline(char , int ,int );
int main() {
    int i,j;
    char ch;
    printf("Please enter an character and two integars to print it several times!('|' to quit):\n");
    if((scanf("%c %d %d",&ch , &i , &j)==3) && ch != '|'){
            chline(ch,i,j);
    }
    printf("Done!\n");

    return 0;
}


void chline (char a,int b,int c){
    int i , j;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < c; j++) {
            printf("%c",a);

        }
        printf("\n");
    }
}