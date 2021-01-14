/*5. Използвайте функцията sizeof(),за да проверите размера
на типа на вашата машина. Типове за проверка- integer, float,
short int, unsigned long int*/

#include <stdio.h>

int main(){
    int i;
    char a;
    double b;
    float c;
    short int d;
    long long e; 
    unsigned long int j;

    printf("Int size= %d\n", sizeof(i));
    printf("Char size= %d\n", sizeof(a));
    printf("Double size= %d\n", sizeof(b));
    printf("Float size= %d\n", sizeof(c));
    printf("Short int size= %d\n", sizeof(d));
    printf("Long long size= %d\n", sizeof(e));
    printf("Unsignet long int size= %d\n", sizeof(j));
    
    return 0;
}