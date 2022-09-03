#include <stdio.h>

double harmonic(double , double);

int main() {
    double x,y;
    printf("Enter two double type numbers to get the harmonic mean. q to quit:________\b\b\b\b\b\b\b\b");
    while(scanf("%lf %lf",&x,&y) == 2 ) {
        printf("The harmonic mean is: %lf",harmonic(x, y));
    }
    printf("Done!\n");


    return 0;
}


double harmonic( double a, double b){
    double i,j,temp;
    i = 1/a;
    j = 1/b;
    temp = 2/(i+j);
    return temp;

}