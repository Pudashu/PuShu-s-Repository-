#include <stdio.h>
#define TIME 60
int main() {
    int minutes;
    int hours,mins;

    printf("Enter a time to start the programme:");

    while((scanf("%d",&minutes))== 1 && minutes >= 0 ){
        hours = minutes % TIME;
        mins = minutes / TIME;
        printf("%d minutes is %d hours and %d minutes.\n",minutes,hours,mins);
        printf("Please enter a new time to continue or a number lower than 0 to quit:");
    }
    printf("Done!\n");
    return 0;
}
