#include<stdio.h>
#include<stdlib.h>
void readfloats(FILE *stream);
void printfloats(FILE *stream);
int main(){
    FILE *fp;
    char str[10]="float.dat";
    if((fp = fopen(str,"wb"))==NULL) exit(-1);
    readfloats(fp);
    fclose(fp);
    if((fp = fopen(str,"rb"))==NULL) exit(-1);
    printfloats(fp);
    fclose(fp);

    return 0;
}

void readfloats(FILE *stream){
    float fl;
    for(int i = 0;i<10;i++){
        scanf("%f",&fl);
        fwrite(&fl, sizeof(float), 1, stream);
    }

}

void printfloats(FILE *stream){
    float fl;

    while (fread(&fl, sizeof(float), 1, stream) > 0) {
        long tmp = *(long *)&fl;
        for (int i=0; i<sizeof(float)*8; i++) {
            putchar(tmp&0x80000000 ? '1' : '0');
            tmp <<= 1;
        }
        putchar('\n');
    }
}