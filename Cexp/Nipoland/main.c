#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0
#define LENGTH 100

typedef int Status;
typedef int Elemtype;
typedef struct LNode {
    Elemtype e;
    struct LNode *next;
} LNode;
typedef LNode *PtrL;

Status InitList(PtrL *);

void popin(PtrL, Elemtype); //进栈函数
Elemtype popout(PtrL);      //出栈并输出
void trans(PtrL);           //进行获输入与转换
void print_ans(PtrL);       //打印结果并free

int main() {
    PtrL p;
    if (InitList(&p)) {
        trans(p);
    }
    return 0;
}

Status InitList(PtrL *p) {
    *p = (PtrL) malloc(sizeof(LNode));
    if (*p != NULL) {
        (*p)->next = NULL;
        return OK;
    }
    return ERROR;
}

void trans(PtrL p) {
    char str[LENGTH];
    Elemtype operand = 0;
    char ch;
    int index;
    Elemtype c_a, c_b;
    Elemtype c_result;

    fgets(str, LENGTH, stdin);

    for (index = 0; index < LENGTH;) {

        ch = str[index];
        operand = 0;

        //操作数
        switch (ch) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9': {
                do {
                    operand *= 10;
                    operand += str[index] - '0';
                    index++;
                } while (str[index] >= '0' && str[index] <= '9');

                //操作数入栈
                popin(p, operand);
                break;
            }
            case ' ': {
                index++;
                break;
            }
            case '+': {
                //操作数出栈
                c_b = popout(p);
                c_a = popout(p);
                c_result = c_a + c_b;
                //运算结果入栈
                popin(p, c_result);
                index++;
                break;
            }
            case '-': {
                if(isdigit(str[index+1])){
                    index++;
                    do {
                        operand *= 10;
                        operand -= str[index] - '0';
                        index++;
                    } while (str[index] >= '0' && str[index] <= '9');

                    popin(p,operand);
                    break;
                }
                //操作数出栈
                c_b = popout(p);
                c_a = popout(p);
                c_result = c_a - c_b;
                //运算结果入栈
                popin(p, c_result);
                index++;
                break;
            }
            case '*': {
                //操作数出栈
                c_b = popout(p);
                c_a = popout(p);
                c_result = c_a * c_b;
                //运算结果入栈
                popin(p, c_result);
                index++;
                break;
            }
            case '/': {
                //操作数出栈
                c_b = popout(p);
                c_a = popout(p);
                c_result = c_a / c_b;
                //运算结果入栈
                popin(p, c_result);
                index++;
                break;
            }
            case '\n': {
                print_ans(p);
                return;
            }
            default: {
                printf("Input wrong! Please put an integer or an operator\n");
                return; //出现语法错误直接退出
            }
        } // switch
    }   // for
}

void popin(PtrL p, Elemtype c) {
    PtrL q = (PtrL) malloc(sizeof(LNode));
    if (q) {
        q->e = c;
        q->next = p->next;
        p->next = q;
    }
}

Elemtype popout(PtrL p) {
    PtrL q = p->next;
    if (q) {
        Elemtype e = p->next->e;
        p->next = q->next;
        free(q);
        return e;
    }
    return ERROR;
}

void print_ans(PtrL p) {
    printf("%d\n", p->next->e);
    free(p->next);
    free(p);
}
