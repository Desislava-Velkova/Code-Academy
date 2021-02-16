/*Задача 9. Дефинирайте и инициализирайте променлива „а“.
Пойнтер към пойнтер към променлива.
Дефинирайте и инициализирайте пойнтер към нея.
Дефинирайте и инициализирайте пойнтер към първия пойнтер. Задайте
стойност на втория пойнтер 15.
Колко е стойността на променливата „а“?
Вземете бележката от масата, на нея пише в кое чекмедже (на скрина)
ще намерите бележката, на която пише къде е палтото (в гардероба);
Обърнете внимание на броя на звездичките!*/

#include <stdio.h>

int main(void){
    int a = 5; /*init. a */
    int *ip = &a; /*create pointer to variable a*/
    int **ptr = &ip; /*create pointer to pointer which value is variable a*/
    **ptr = 15; /*change value of variable a*/

    printf("\n Variable a = %d\n pointer *ip = %d\n pointer to pointer **ptr = %d\n",a, *ip, **ptr);
    printf("\n The adress of a = %p\n The adress of *ip = %p\n The adress of **ptr = %p",a, ip, ptr);

    return 0;
}