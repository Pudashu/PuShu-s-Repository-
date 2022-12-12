#include <stdio.h>
typedef struct bits{
    unsigned short bit0:1;
    unsigned short bit1:1;
    unsigned short bit2:1;
    unsigned short bit3:1;
    unsigned short bit4:1;
    unsigned short bit5:1;
    unsigned short bit6:1;
    unsigned short bit7:1;
    unsigned short bits[8];
}BITS;

void f0(int n){
    printf("the function %d is called!\n",n);
}
void f1(int n){
    printf("the function %d is called!\n",n);
}
void f2(int n){
    printf("the function %d is called!\n",n);
}
void f3(int n){
    printf("the function %d is called!\n",n);
}
void f4(int n){
    printf("the function %d is called!\n",n);
}
void f5(int n){
    printf("the function %d is called!\n",n);
}
void f6(int n){
    printf("the function %d is called!\n",n);
}
void f7(int n){
    printf("the function %d is called!\n",n);
}
void (*p_fun[8])(int ) = {f0,f1,f2,f3,f4,f5,f6,f7};
int main() {
    BITS Num_bits;
    unsigned short num;
    scanf("%hu",&num);
    Num_bits.bit0 = num;
    Num_bits.bits[0] = Num_bits.bit0;
    num >>= 1;
    Num_bits.bit1 = num;
    Num_bits.bits[1] = Num_bits.bit1;
    num >>= 1;
    Num_bits.bit2 = num;
    Num_bits.bits[2] = Num_bits.bit2;
    num >>= 1;
    Num_bits.bit3 = num;
    Num_bits.bits[3] = Num_bits.bit3;
    num >>= 1;
    Num_bits.bit4 = num;
    Num_bits.bits[4] = Num_bits.bit4;
    num >>= 1;
    Num_bits.bit5 = num;
    Num_bits.bits[5] = Num_bits.bit5;
    num >>= 1;
    Num_bits.bit6 = num;
    Num_bits.bits[6] = Num_bits.bit6;
    num >>= 1;
    Num_bits.bit7 = num;
    Num_bits.bits[7] = Num_bits.bit7;
    for(int i = 0;i<8;i++){
        if(Num_bits.bits[i]){
            p_fun[i](i);
        }
    }
    return 0;
}
