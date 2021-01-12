/*1)Направете побитовите операции върху целите числа 3 и 5 в main().
Покажете резултата с функцията printf(“%d”, rez);*/

#include <stdio.h>

int main (){
    int rez;

    rez = 3 & 5;
    printf("3 & 5 = %d\n", rez);
    rez = 3 | 5;
    printf("3 | 5 = %d\n", rez);
    rez = 3 ^ 5;
    printf("a ^ b = %d\n", rez);

    return 0;
}