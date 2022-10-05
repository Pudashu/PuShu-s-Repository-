#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100


struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
void change(struct book * str1,struct book * str2);

int main() {
    struct book library[MAXBKS];
    int count = 0 ;
    int index;

    printf("Please enter the book title.\n");
    printf("Please [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && (s_gets(library[count].title, MAXTITL) != NULL )&& library[count].title[0] != '\0') {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }
//    if (count > 0) {
//        for (int i = 0; i < count - 1; i++) {
//            for (int j = i + 1; j < count; j++) {
//                if (strncmp(library[i].title, library[j].title, 1) > 0)
//                    change(library[i].title, library[j].title);//只换了名字，有问题
//            }
//        }
//    } else
//        printf("No books? Too bad.\n");
    if (count > 0){
        for(int i = 0; i < count - 1; i++){
            for (int j = i+1; j < count; j++){
                if(library[i].value > library[j].value)
                    change(&library[i],&library[j]);
            }
        }
    }
    else
        printf("No books? Too bad\n");
    printf("Here is the list of your books:\n");
            for (index = 0; index < count; index++)
                printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);


    return 0;
}
char * s_gets(char * st, int n){
    char * ret_val;
    char * find;

    ret_val = fgets(st , n , stdin);
    if (ret_val){
        find = strchr(st, '\n');
        if (find){
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}


void change(struct book * str1,struct book * str2){
    struct book * temp;
    *temp = *str1;
    *str1 = *str2;
    *str2 = *temp;
    //传递指针，交换值
}