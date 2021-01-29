/*Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него.*/

#include <stdio.h>
#include "function.h"
#include "functionBody.c"

int main(){
    int a, b;
    float num, res;

    do{
        printf("Enter two numbers to chek NOK\n");
        scanf("%d",&a);
        scanf("%d",&b);

        if((a<0)|| (b<0)){
            printf("You enter a negative number!\n");
        }
    }while((a<0) || (b<0));
    printf("NOK = %d\n",NOK(a,b)); /*Using 1st function*/
    
    printf("Enter number to chek his absolute value\n");
    scanf("%f", &num);
    printf("The absolut value of %.2f is: %.2f\n",num,absoluteValue(num));/*Using 2nd function*/

    printf("Enter number to chek his sqr\n");
    scanf("%f", &num);
    res = sqr(num);/*Using 3th function*/
    if(res > 0){
        printf("The sqr value of %.2f is: %.2f\n",num,res);
    }else {
        num = absoluteValue(num);
        printf("The sqr value is: %.2f\n",sqr(num));
    }
}