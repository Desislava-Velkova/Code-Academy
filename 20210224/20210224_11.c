/*Задача 11.

Ако имеме дефинирано макро
#define М 
кои от по долните дефиниции ще пропаднат:
а) #if M - ще пропадне, ако имаше стойност след дефиницята на М щеше  да сработи: (#definie M 1)
b) #ifdef M - ще върне истина, макроса е дефиниран
c) #ifndef M - ще пропадне, макроса вече е дефиниран
d) #if defined(M) - ще сработи, макоса е дефиниран
e) #if !defined(M) - ще пропадне, името е дефинирано */

#include <stdio.h>
#define M 

int main(){
    printf("\n\t***The working macros are:***\n");

   /* #if M  - ще даде грешка при компилиране, тъй като М няма зададена стойност
    printf("#if\n");
    #endif */

    #ifdef M
    printf("#ifdef M\n");
    #endif

    #ifndef M
    printf("#ifndef M\n");
    #endif

    #if defined(M)
    printf("#if defined(M)\n");
    #endif

    #if !defined(M)
    printf("#if !defined(M)\n");
    #endif

    return 0;
}