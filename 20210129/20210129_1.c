/*1.Направете глобална константа Pi = 3.14, както правихме в предишния урок.
Направете функция, която изчислява площта на кръг, на която като параметър подаваме
радиуса и връщаме площа на кръга. Използвайте глобална константа Pi за да извършвате изчисленията.
Извикайте фунцкията в main() и покажете резултата*/

#include <stdio.h>
#define PI 3.14
float area(float radius);

int main(void){
    float r, res;

    printf("Insert radius:\n");
    scanf("%f", &r);

    res = area(r);

    printf("The area of the circle is: %.2f",res);
}
float area(float radius){
    return PI * radius * radius;
}