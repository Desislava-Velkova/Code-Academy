/* 6. Запишете в четири последователни байтове в паметта със
стойност 0xAA(10101010) и разпечатайте съдържанието на горните байтове,
ако типът е: float, signed int, unsigned int*/

#include <stdio.h>

int main(){
    float f = 0xAA;
    signed int i = 0xAA;
    unsigned a = 0xAAu;

    printf("f = %f, i = %d, a = %d", f, i, a);
    
    return 0;
}