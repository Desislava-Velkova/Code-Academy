/*19*. Докажете опитно теоремите на Де Морган:
! ( А && B ) = ! A || ! B
! ( A || B ) = ! A && ! B
Под опитно доказване се разбира да се направят всичките четири
комбинации на A и B и за тях да се провери горното.*/

#include <stdio.h>

int main(){
    int A = 3; 
    int B = 3;
    int x,y;
    
    x = ((!(A && B)) ? 1 : 0);
    y = ((!A || !B) ? 1 : 0);
    x==y ? printf("!(А && B)=!A || !B is true\n") : printf("!(А && B)=!A || !B is NOT true\n");

    x = ((!(A || B)) ? 1 : 0);
    y = ((!A && !B) ? 1 : 0);
    x==y ? printf("!(A || B) = !A && !B is true\n") : printf("!(A || B) = !A && !B is NOT true\n");

    return 0;
}