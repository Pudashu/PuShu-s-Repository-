#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef int SCORE;
typedef float Average;
typedef char* ID;
typedef char* NAME;

typedef struct L_node{
    ID Id;
    NAME Name;
    SCORE English;
    SCORE Math;
    SCORE Physics;
    SCORE C;
    Average Ave;
    SCORE total;
    struct L_node * next;
    struct L_node * prev;
}L_NODE;
typedef L_NODE* PtrL;

int CreateList(PtrL);//完成创建与初始化
void InputInfo(PtrL,int);//在Create函数内部
void OutputInfo(PtrL,int);
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

void CntAve(PtrL,int);
void SortAve(PtrL,int);
void OutputDetails(PtrL,int);
void Grades_in_File(PtrL,FILE*,int );
PtrL Grades_out_File(FILE*,int);



//正常统计total应该放在结构体里，或再写个函数，这里不做处理
int main(void) {
    FILE *fp;
    int choice,selection;
    PtrL p;
    int n=0;
    int Score;
    char StuId[10];
    PtrL head = (PtrL)malloc(sizeof(L_NODE));
    head->next=NULL;
    while(1){
        scanf("%d",&choice);
        if(!choice) break;
        else if(choice == 1){
            n += CreateList(head);
        }
        else if(choice == 2){
            if(n) {
                CntAve(head,n);
                SortAve(head,n);
                OutputInfo(head, n);
            }
            else printf("Haven't initialized yet~ Press 1 to input infos.");
        }
        else if(choice == 3){
            scanf("%s",StuId);
            scanf("%d",&selection);
            scanf("%d",&Score);
            ModifyGrades[selection-1](StuId,head,Score);
        }
        else if(choice == 4){
            CntAve(head,n);
            SortAve(head,n);
            p = head->prev;
            for(int i = 0; i<n; i++){
                printf("%s %s %.2lf\n",p->Id,p->Name,p->Ave);
                p=p->prev;
            }
        }
        else if(choice == 5){
            CntAve(head,n);
            SortAve(head,n);
            CntAve(head,n);
            OutputDetails(head,n);
        }
        else if(choice == 6){
            CntAve(head,n);
            fp = fopen("stu.dat","wb");
            Grades_in_File(head,fp,n);
            fclose(fp);
        }
        else if(choice == 7){
            CntAve(head,n);
            fp = fopen("stu.dat","rb");
            head = Grades_out_File(fp,n);
            fclose(fp);
        }
        else printf("Wrong choice, please try again or input 0 to finish.");
    }
    return 0;
}

int CreateList(PtrL head){
    int num;
    scanf("%d",&num);
    InputInfo(head,num);
    return num;
}

void InputInfo(PtrL head,int n){
    PtrL p;
    if(NULL == head->next){
        p = (PtrL) malloc(sizeof(L_NODE));
        head->prev = p;
        head->next = p;
        p->Id = (char *) malloc(sizeof(char) * 10);
        p->Name = (char *) malloc(sizeof(char) * 10);
        p->next = head;
        p->prev = head;
        scanf("%s", p->Id);
        scanf("%s", p->Name);
        scanf("%d %d %d %d", &(p->English), &(p->Math), &(p->Physics), &(p->C));
        n--;
    }
    for(int i = 0; i < n; i++){
        p = (PtrL)malloc(sizeof(L_NODE));
        p->Id = (char *) malloc(sizeof(char)*10);
        p->Name = (char *) malloc(sizeof (char)*10);
        p->next = head->next;
        p->prev = head;
        p->next->prev = p;
        head->next = p;
        scanf("%s",p->Id);
        scanf("%s",p->Name);
        scanf("%d %d %d %d",&(p->English),&(p->Math),&(p->Physics),&(p->C));
    }

}





void OutputInfo(PtrL head,int n){
    PtrL p = head->prev;
    for(int i = 0; i < n;i++){
        printf("%s ",p->Id);
        printf("%s ",p->Name);
        printf("%d %d %d %d\n",p->English,p->Math,p->Physics,p->C);
        p = p->prev;
    }
}



void CntAve(PtrL head,int n){
    int index = 0;
    int tot;
    PtrL p = head->prev;
    while(index < n){
        tot = p->English+p->Math+p->Physics+p->C;
        p->total = tot;
        p->Ave = (float)tot / 4;
        p = p->prev;
        index++;
    }
}
void SortAve(PtrL head,int n){
    PtrL p;
    PtrL q;
    for (int i = 0; i < n-1;i++){
        p = head->prev;
        q = p->prev;
        for (int j = 0; j < n-i-1;j++) {

            if(p->Ave > q->Ave){
                q->prev->next = p;
                p->next->prev = q;
                q->next = p->next;
                p->prev =q->prev;
                q->prev = p;
                p->next=q;
                q=p->prev;
            }
            else{
                p=p->prev;
                q=p->prev;
            }

        }
    }
}//指针交换

void OutputDetails(PtrL head,int n){
    PtrL p = head->prev;

    for(int i = 0; i < n;i++){
        printf("%s ",p->Id);
        printf("%s ",p->Name);
        printf("%d %.2lf\n",p->total,p->Ave);
        p = p->prev;
    }
}

void Grades_in_File(PtrL head,FILE *fp,int n){
    PtrL p = head->prev;
    for(int i=0; i<n ;i++) {
        fwrite(p,sizeof(L_NODE),1,fp);
        p=p->prev;
    }
}
//很混乱

PtrL Grades_out_File(FILE* fp,int n){
    PtrL headp = (PtrL)malloc(sizeof(L_NODE));
    PtrL pp = (PtrL)malloc(sizeof(L_NODE));
    headp->prev = pp;
    headp->next = pp;
    pp->prev = headp;
    pp->next = headp;
    for(int i = 0; i<n ; i++){
        fread(pp,sizeof(L_NODE),1,fp);
        pp->prev= (PtrL)malloc(sizeof(L_NODE));
        pp->prev->next = pp;
        pp->prev->prev = headp;
        pp=pp->prev;
        headp->next = pp;
    }
    headp->next = pp->next;
    return headp;
}