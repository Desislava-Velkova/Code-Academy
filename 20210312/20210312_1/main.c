/*Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък:*/

#include "func.h"

node_t* start;

int main(void){
    int removeElement = 2, valueRemoveElement = 3;

    init(); /*call init start func*/

    for(int i=0; i<5; i++){
        add(i); /*adding 1 as element to the list*/
    }

    printList(start); /*prints the  elements added with the previos function*/

    start->next = dellElemReturnAfter(&removeElement, valueRemoveElement); /*remove element from the list*/

    printList(start); /*prints the new list*/

    return 0;
}