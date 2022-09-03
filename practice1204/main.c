#include <stdio.h>
static int index = 0;
int testloop();
int main() {
    int i,j;
    printf("please enter an integer:");
    scanf("%5d",&i);
    for (int j = 0; j <=i; ++j) {
        testloop();

    }
    printf("the function testloop has been called %d times",index);
    return 0;
}

int testloop(){
    return ++index;
}
