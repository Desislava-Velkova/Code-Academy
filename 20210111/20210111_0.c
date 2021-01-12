/*Декларирайте функция, която събира две числа и връща резултата им:
int addDigit(int a, int b);
Декларирайте в мейн две променливи, дайте им стойности, подайте
променливите на функцията addDigit() и принтирайте резултата.
int main(void){
int a,b;
addDigit(а,b);
return 0;
}
Напишете тялото на функцията най-отдолу, в което се извършва
събирането:*/

#include <stdio.h>
int addDigit(int x, int y);

int main(){
    int a = 5;
    int b = 10;
    
    printf("The sum of a and b is: %d",addDigit(a,b));

    return 0;
}
int addDigit(int x, int y){
    int sum = x+y;
    return sum;
}