#include <stdio.h>
#include "pe12-2a.h"

static int mode;
static double distance;
static double fuel;

void set_mode(int n){
    if(n>1){
        printf("Invalid number is entered.Mode %s is used.",
               (0==mode)?"0(Metric)" : "1(US)");
    }
    else
        mode = n ;
    return;

}

void get_info(){
    if (mode == 0){
        printf("Enter distance traveled in kilometers:");
    }
    else
        printf("Enter distance traveled in miles:");
    scanf("%lf",&distance);

    if (mode == 0)
        printf("Enter fuel consumed in liters:");
    else
        printf("Enter fuel consumed in gallons:");
    scanf("%lf",&fuel);

    return;
}

void show_info(){
    if (mode == 0)
        printf("Fuel consumption is %.2f liters per 100km.\n",(fuel/distance)*100);
    else
        printf("Fuel consumption is %.2f miles per gallon.\n",distance/fuel);
}
