#include <stdio.h>

struct monthinfo {
        char * month_name;
        char * month_simp;
        int day_of_month;
        int month_num;
};
int ReturnDay(struct monthinfo (*)[]);

int main() {
    enum Monthnumber {Jan = 1 ,Feb,Mar,Apr,May, Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    struct monthinfo moy[12] = {
            {"January","Jan",31,Jan},
            {"February","Feb",28,Feb},
            {"March","Mar",31,Mar},
            {"April","Apr",30,Apr},
            {"May","May",31,May},
            {"June","Jun",30,Jun},
            {"July","Jul",31,Jul},
            {"August","Aug",31,Aug},
            {"September","Sep",30 , Sep},
            {"October","Oct",31,Oct},
            {"November","Nov",30,Nov},
            {"December","Dec",31,Dec}

    };
    struct monthinfo (* pf)[];
    pf = &moy;
    printf("Please enter a num between 1 to 12 to calculate all the days till the month that integar related to.");
    printf("All the days till this month sums up to %d",ReturnDay(pf));



}


int ReturnDay(struct monthinfo (*pointer)[]){
    int tot = 0,index;
    scanf("%d",&index);
    while (getchar() != '\n')
        continue;
    index = index--;
    for (int i = 0; i <= index ; ++i) {
        tot += (*pointer)[i].day_of_month;
    }
    return tot;
}