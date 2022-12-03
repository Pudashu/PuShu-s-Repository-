#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define OK 1
#define ERROR 0

typedef int Status;
typedef int Elemtype;
typedef struct LNode{
    Elemtype e;
    struct LNode* next;
}LNode;
typedef LNode* PtrL;

Status InitList(PtrL*);
void popin(PtrL,Elemtype);//进栈函数
Elemtype popout(PtrL);//出栈并输出
void trans(PtrL);//进行获输入与转换
void print_ans(PtrL);//打印结果并free

int main(){
    PtrL p;
    if(InitList(&p)) {
        trans(p);
    }
    return 0;
}

Status InitList(PtrL* p){
    *p = (PtrL) malloc(sizeof(LNode));
    if(*p != NULL) {
        (*p)->next = NULL;
        return OK;
    }
    return ERROR;

}



void trans(PtrL p){
    char str[100];
    fgets(str,100,stdin);
    Elemtype c = 0;
    char ch;
    int i;
    Elemtype c_a,c_b;
    Elemtype c_result;
    for(i = 0; str[i] != '\n' ; i++){
        if(str[i]-'0' >= 0 && str[i] - '0' <= 9){
            for(; str[i] != ' '; i++) {
                c *= 10;
                c += str[i] - '0';
            }
            popin(p,c);
        }
        else {
            if(str[i] == ' ') continue;
            ch = str[i];
            switch(ch) {
                case '+': {
                    c_a = popout(p);
                    c_b = popout(p);
                    c_result = c_a+c_b;
                    popin(p,c_result);
                    break;
                }
                case '-':{
                    c_a = popout(p);
                    c_b = popout(p);
                    c_result = c_a-c_b;
                    popin(p,c_result);
                    break;
                }

                case '*':{
                    c_a = popout(p);
                    c_b = popout(p);
                    c_result = c_a*c_b;
                    popin(p,c_result);
                    break;
                }

                case '/':{
                    c_a = popout(p);
                    c_b = popout(p);
                    c_result = c_b/c_a;
                    popin(p,c_result);
                    break;
                }
                default:
                    printf("Input wrong!Please put an integer or a calculator\n");
                    break;

            }
        }
        c = 0;
    }
    print_ans(p);
}

void popin(PtrL p, Elemtype c){
    PtrL q = (PtrL)malloc(sizeof(LNode));
    if(q) {
        q->e = c;
        q->next = p->next;
        p->next = q;
    }
}

Elemtype popout(PtrL p){
    PtrL q = p->next;
    if(q) {
        Elemtype e = p->next->e;
        p->next = q->next;
        free(q);
        return e;
    }
    return ERROR;
}

void print_ans(PtrL p){
    printf("%d\n",p->next->e);
    free(p->next);
    free(p);
}