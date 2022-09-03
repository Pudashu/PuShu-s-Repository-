#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void) {
    FILE *fp;
    char words[MAX];

    if ((fp=fopen("wordy","a+"))==NULL) {
        fprintf(stdout,"Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }

    puts("Enter words to add to the file;press'|' at the beginning to quit.\n");
    while (fscanf(stdin,"%40s",words)==1 && (words[0]!='|'))
        fprintf(fp,"%s\n",words);

    puts("File contents:\n");
    rewind(fp);//回到文件开头
    while(fscanf(fp,"%s",words)==1)//从头读取
        puts(words);//加换行符
    puts("Done!");
    if (fclose(fp) != 0)//fclose返回成功值为0
        fprintf(stderr,"Error closing file\n");

    return 0;

}
