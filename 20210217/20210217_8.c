/*Задача 8. Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */

#include <stdio.h>
#define LENGTH 10
void fillArr(int *arr);
void printArr(int *arr);

int main(void){
    int num_Fibonachi[LENGTH] = {0,1};
    
    void (*ptr)(int *) = NULL; /*create pointer to function directed to NULL*/

    ptr = &fillArr; /*directs the pointer to fillArr function*/
    ptr (num_Fibonachi); /*calls the fillArr func with the pointer*/
    
    ptr = &printArr; /*calls the printArr func with the pointer*/
    ptr (num_Fibonachi);/*directs the pointer to printArr function*/

    return 0;
}
void fillArr(int *arr){
    int i;

    for(i=2; i<LENGTH; i++){
        *(arr+i) = *((arr +i)-1) + *((arr +i)-2);
    }
}
void printArr(int *arr){
    int i;
    
    printf("The number of Fibonachi are:\n");
    for(i=0; i<LENGTH; i++){
        printf("arr[%d] = %d\n", i, *(arr+i));
    }
}