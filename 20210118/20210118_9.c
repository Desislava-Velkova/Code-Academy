/* 9.Аритметични оператори
homework: examples for '*', '+', float - използвайте вместо int */

#include <stdio.h>

int main (){
    int iX = 13;
    float fX = 8.20;
    int iY = 44;
    float fY = 33.5;
    int iResult = 0;
    float fResult = 0;

    iResult = iX - iY;
    printf("%d - %d = %d\n",iX, iY, iResult);

    iResult = iY / iX;
    printf("%d / %d = %d\n",iY, iX, iResult);

    iResult = iY % iX;
    printf("%d / %d Reminder:%d\n",iY, iX, iResult);

    fResult = fY + fX;
    printf("%.2f + %.2f = %.2f\n",fY, fX, fResult);

    fResult = fY * fX;
    printf("%.2f * %.2f = %.2f\n",fY, fX, fResult);

    return 0;
}