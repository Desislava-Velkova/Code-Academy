/*Задача 7. Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.*/

#ifndef _MYHEADER_H_
#define _MYHEADER_H_
#include "myheader.h"
#endif // _MYHEADER_H_
  

int main(void){
    int a, b;

    input(&a, &b);

    printf("The result of a + b is: %d\n", add(a,b));

    printf("The result of a - b is: %d\n", subtraction(a,b));

    printf("The result of a * b is: %d\n", multiplication(a,b));

    printf("The result of a / b is: %d\n", division(a,b));

    return 0;
}