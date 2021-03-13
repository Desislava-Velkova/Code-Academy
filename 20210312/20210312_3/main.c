/*Задача 3.
Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му.*/

#include "func.h"

node_t* start;

int main(void){
    int positionElement[14];

    init(); /*initialize the head node with null*/

    for(int i=1; i<15; i++){ /*add the num from 1 to 14 in linked list*/
        add(i);
        *(positionElement+i-1) = start->data;
    }
    
    printList(start); /*prints the all linked list*/

    printElement(5, positionElement); /*prints the position of the node from list and his value*/

    return 0;
}