#include <stdio.h>
#include <string.h>
//char * s_gets(char * st, int n){
//    char * ret_val;
//    int i=0;
//    ret_val = fgets(st,n,stdin);
//    if (ret_val){
//        while(st[i] != '\n' && st[i] != '\0')
//            i++;
//        if (st[i]== '\n')
//            st[i] = '\0';
//        else
//            while(getchar()!='\n')
//                continue;
//    }
//}
char * s_gets(char * st, int n){
    char * ret_val, * find;
    ret_val = fgets(st , n ,stdin);
    if (ret_val){
        find = strchr(st , '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;

    }
    return ret_val;
}
