/*Задача 14. Използвайки предишното упражнение, опишете структурите и
прототипите на функциите в отделен заглавен файл с разширение *.h, a
телата на функциите в един или няколко *.c сорс файлове.*/
#include <stdio.h>
#include <stdlib.h>
#include "bodyFunc.c"

int main(void){
    struct employees emp[10];
    struct employees manager[2];

    fillInfo(emp, 10); /*fills inf for the employees*/
    ManagerInfo(manager,2); /*fills inf for the managers*/
    assignManagers(emp,manager,10,2); /*choose manager for every employees*/

    printInfo(emp,10);  /*print the  inf for every employees*/


    return 0;
}
