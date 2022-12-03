#include<stdio.h>
int scheduler(void (*p[])(void));
void execute(int n,void (*p[])(void));
void task0(){
    printf("task0 is called!\n");
}
void task1(){
    printf("task1 is called!\n");
}
void task2(){
    printf("task2 is called!\n");
}

void task3(){
    printf("task3 is called!\n");
}
void task4(){
    printf("task4 is called!\n");
}
void task5(){
    printf("task5 is called!\n");
}
void task6(){
    printf("task6 is called!\n");
}
void task7(){
    printf("task7 is called!\n");
}
void (*task[8])(void) = {task0,task1,task2,task3,task4,task5,task6,task7};
int main(){

    int n;
    void (*TASK[100])(void);
    n = scheduler(TASK);
    execute(n,TASK);
    return 0;
}

int scheduler(void (*p[])(void)){
    int i = 0;
    int index;
    while((index=getchar()-'0') >= 0 && index <=7 ){
        p[i] = task[index];
        i++;
    }
    return i;
}

void execute(int n,void (*p[])(void)){
    for(int i = 0;i<n;i++){
        p[i]();
    }
}