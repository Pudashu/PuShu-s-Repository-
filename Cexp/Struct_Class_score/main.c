#include <stdio.h>
#include <string.h>
typedef int SCORE;
typedef char* ID;
typedef char* NAME;

typedef struct L_node{
    ID Id;
    NAME Name;
    SCORE English;
    SCORE Math;
    SCORE Physics;
    SCORE C;
    struct L_node * next;
}L_NODE;
typedef L_NODE* PtrL;

int CreateList(PtrL *);//完成创建与初始化
void InputInfo(PtrL);//在Create函数内部
void OutputInfo(PtrL);
void Eng(ID StuID,PtrL head,SCORE Eng){
    PtrL p = head->next;
    while(p && strcmp(p->Id,StuID)) p = p->next;
    if(p) p->English = Eng;
    else {
        printf("Wrong ID!");
        return;
    }
}
void Math(ID StuID,PtrL head,SCORE Math){
    PtrL p = head->next;
    while(p && strcmp(p->Id,StuID)) p = p->next;
    if(p) p->Math = Math;
    else {
        printf("Wrong ID!");
        return;
    }
}
void Phy(ID StuID,PtrL head,SCORE Phy){
    PtrL p = head->next;
    while(p && strcmp(p->Id,StuID)) p = p->next;
    if(p) p->Physics = Phy;
    else {
        printf("Wrong ID!");
        return;
    }
}
void C(ID StuID,PtrL head,SCORE C){
    PtrL p = head->next;
    while(p && strcmp(p->Id,StuID)) p = p->next;
    if(p) p->C = C;
    else {
        printf("Wrong ID!");
        return;
    }
}
void (*ModifyGrades[4])(ID,PtrL,SCORE) = {Eng,Math,Phy,C};//选项3：更改程序

int * CntAve(PtrL,int );

void OutputDetails(PtrL);



int main(void) {
    int choice,selection;
    int n;
    int Score;
    int * Average;
    char StuId[10];
    PtrL head;
    while(1){
        scanf("%d",&choice);
        if(!choice) break;
        else if(choice == 1){
            n = CreateList(&head);
        }
        else if(choice == 2){
            OutputInfo(head);
        }
        else if(choice == 3){
            scanf("%s",StuId);
            scanf("%d",&selection);
            scanf("%d",&Score);
            ModifyGrades[selection-1](StuId,head,Score);
        }
        else if(choice == 4){
            Average = CntAve(head,n);
        }
        else if(choice == 5){
            OutputDetails(head);
        }
        else printf("Wrong choice, please try again or input 0 to finish.");
    }
    return 0;
}

int * CntAve(PtrL head,int n){
    int Ave[n];
    int index = 0;

}