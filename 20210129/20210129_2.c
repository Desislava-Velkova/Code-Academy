/*2.Напишете функция area() без параметри.
Поискайте от потребителя да въведе радиус с помощта на функциите:
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната фунцкия 1. за изчисляване на площта на кръга,
която написахме преди малко за да изчислите площта на кръга с този радиус и върнете резултата.*/

#include <stdio.h>
#define PI 3.14
float area(void);

int main(void){
    double res;
    res = area();

    printf("The area of the circle is: %lf",res);
}
float area(void){
    double r;

    printf("Enter a radius\n");
    scanf("%lf", &r);

    return PI * r * r;
}