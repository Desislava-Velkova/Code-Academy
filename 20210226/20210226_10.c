/*Задача 10. Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С-и*/

#include <stdio.h>

int main(void){
    char cValue = '0';

    short sValue = - (cValue + cValue);
    printf("short sValue = - (cValue + cValue) = %d\n", sValue);

    unsigned short usValue = - (cValue + cValue);
    printf("unsigned short usValue = - (cValue + cValue) = %ud\n", usValue);

    int iValue = sValue;
    printf("sValue = %d\n", sValue);

    unsigned int uiValue = sValue;
    printf("uiValue = %u\n", uiValue);

    long lValue = iValue;
    printf(" lValue = %ld\n", lValue);

    unsigned long ulValue = iValue;
    printf(" ulValue = %u\n", ulValue);

    float fValue = ulValue;
    printf(" fValue = %f\n", fValue);

    double dfValue = ulValue; 
    printf(" dfValue = %lf\n", dfValue);

    return 0; 
}
