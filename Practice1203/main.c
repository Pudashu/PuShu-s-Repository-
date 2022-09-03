#include <stdio.h>
#include "pe12-3a.h"
int main() {
    int mode, temp;
    double distance,fuel;

    printf("Please Enter 0 for metric mode ,1 for US mode:");
    scanf("%d",&mode);
    while (mode>=0){
        set_mode(&mode,&temp);
        get_info(&mode,&distance,&fuel);
        show_info(&mode, &distance, &fuel);
        printf("Please enter 0 for metric mode, 1 for US mode");
        printf("(-1 to quit):");
        scanf("%d",&mode);
    }
    printf("Done!\n");
    return 0;
}
