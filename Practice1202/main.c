#include <stdio.h>
#include "pe12-2a.h"
int main() {
    int mode;

    printf("Please Enter 0 for metric mode ,1 for US mode:");
    scanf("%d",&mode);
    while (mode>=0){
        set_mode(mode);
        get_info();
        show_info();
        printf("Please enter 0 for metric mode, 1for US mode");
        printf("(-1 to quit):");
        scanf("%d",&mode);
    }
    printf("Done!\n");
    return 0;
}