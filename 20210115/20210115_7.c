/*7. Запишете в осем последователни байтове в паметта
със стойност 0xBB(1011 1011) и разпечатайте съдържанието на
горните байтове, ако типът е: double, signed long long, unsigned
long long*/

#include <stdio.h>

int main(){
    double a = 0xBB;
    signed long long b = 0xBB;
    unsigned long long c = 0xBB;

    printf("a = %lf, b = %lld, c = %lld", a, b, c);
    
    return 0;
}