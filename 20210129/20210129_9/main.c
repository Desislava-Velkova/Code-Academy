/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл.*/

#include <stdio.h>
#include "deklaration.h"
#include "bodyFunction.c"

int main(void){
    int a, b,  res;
    printf("Enter two numbers to work with\n");
    scanf("%d",&a);
    scanf("%d",&b);

    res = add(a,b);
    printf("The result of %d + %d = %d\n",a,b,res);

    res = del(a,b);
    printf("The result of %d / %d = %d\n",a,b,res);

    res = compare(a,b);
    printf("The bigger number of %d and %d is: %d\n",a,b,res);

    return 0;
}