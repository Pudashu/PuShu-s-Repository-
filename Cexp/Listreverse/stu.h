//
// Created by Pu on 2022/12/4.
//

#ifndef LISTREVERSE_STU_H
#define LISTREVERSE_STU_H
/*测试程序定义了如下结点类型
typedef struct c_node{
    char data;  struct c_node *next;
} C_NODE;
*******************************/
#include<stdlib.h>
void Inputc(C_NODE **,char);
C_NODE *reverse(C_NODE *);
void createLinkList(C_NODE **headp, char s[])
{
/************************************* BEGIN *******************************************/
    int i;
    int len = strlen(s);
    *headp = NULL;
    for(i = len-1; i>=0; i--){
        Inputc(headp,s[i]);
    }
/************************************* BEGIN *******************************************/
}

void judgePalindrome(C_NODE *head)
{
/************************************* BEGIN *******************************************/
    C_NODE *fast,*slow;
    fast = head;
    slow = head;
    while(fast && (fast->next)){
        fast = fast->next->next;
        slow = slow->next;
    }
    if(fast){
        slow = slow->next;
    }
    slow = reverse(slow);
    fast = head;
    while(slow){
        if(slow->data==fast->data){
            slow = slow->next;
            fast = fast->next;
        }
        else {printf("false");return;}
    }
    printf("true");
/************************************* BEGIN *******************************************/
}

C_NODE *reverse(C_NODE * p){
    C_NODE *prev = NULL;
    C_NODE *head = p;
    while(p=p->next){
        head->next = prev;
        prev = head;
        head = p;
    }
    return head;
}
//因为题目没有算'\0' 还可以设置头结点，这里设置无头结点的赋值————————！！！要注意传进来指针的地址才能对指针进行修改，而有头结点就没有这个烦恼
void Inputc(C_NODE ** headp,char c){
    C_NODE *p;
    p = (C_NODE*)malloc(sizeof(C_NODE));
    p->data = c;
    p->next = *headp;
    *headp = p;

}








#endif //LISTREVERSE_STU_H
