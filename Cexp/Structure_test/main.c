#include <stdio.h>
#include <stdlib.h>
struct s_list{
    int data;
    struct s_list *next;
};
void create_list(struct s_list **headp,int *p);
int main(void){
    struct s_list *head=NULL,*p;
    int s[9];
    int i,num;
    for(i = 0; i<9; i++){
        scanf("%d",s+i);
    }
    create_list(&head,s);
    p=head;
    while (p){
        printf("%d\t",p->data);
        p=p->next;
    }
    printf("\n");
    return 0;
}
void create_list(struct s_list **headp,int *p){
    *headp = NULL;
    while(*p){
        struct s_list * loc_head = (struct s_list *)malloc(sizeof(struct s_list));
        loc_head->data = *p++;
        loc_head->next = *headp;
        *headp = loc_head;
    }
}

