//14. Comma operator

#include <stdio.h>

int main(){
    int nX = 1, nY = 2;

    printf("\nInit values: X= %d, Y= %d\n", nX, nY);

    nX = 1 + 2, 2 * 3, 3 + 4; /* в изразите може да има фции*/
    /* тъй като оператора ',' е с най-нисък приоритет израза ще протече по следния начин:
    x = 1+2,6,3+4 -> x = 3,6,7 -> x=3 */
    nY = ( 7 * 8, 8 + 9, 9 - 4);//y = (56, 8+9, 9-4) -> y = (56, 17, 5) -> y=5

    printf("\nX= %d, Y= %d\n", nX, nY);

    return 0;
}
