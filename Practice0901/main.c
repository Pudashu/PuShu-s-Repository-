#include <stdio.h>

double min (double,double);

int main() {
    double x,y;
    printf("Enter two DOUBLE TYPE to start the comparison!:(q to quit):\n");
    while (scanf("%lf %lf",&x,&y)==2){
        printf("the minimum is %.2lf", min(x,y));
    }
    printf("Done!\n");
    return 0;
}

double min (double a,double b){
    return (a>b) ? b : a;
}
