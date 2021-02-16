/*Задача 5.
Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).

Можете ли да умножите пойнтер по пойнтер?
При тази декларация колко пойнтера имаме:
int *p, k;*/

#include <stdio.h>

int main(void){
    int a = 34;
    int *iPtr = &a;
    /*if we switch the places of the variable and the pointer that will give us an error 
    because we direct pointer to non-existent (at this moment) variable*/
    printf("The value of *iPtr is: %d",*iPtr);

    int *p, k; /*in this declaration we have one pointer 'p' from int type and one variable 'k' from int type */

    /* (*p * *iPtr) is not allowed because multiplying pointers is not valid in C,
    if we write (*p)* (*iptr) it will work, because first it will take the value from the pointers and then will do the multiplication*/

    return 0;
}