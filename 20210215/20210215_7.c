/*Задача 7.
Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана.*/

#include <stdio.h>

int main(void){
    int b = 10; 
    int *iPtr = &b;
    int res = *iPtr + 5;

    printf("The result of 10 + 5 is: %d",res);

    return 0;
}