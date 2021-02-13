/*Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/

#include <stdio.h>
#include <stdlib.h>
void input(int *num);
void fillArr(int *p, int num);
void printArr(int *p, int num);
int sumArr(int *p, int num);

int main(void){
    int num;
    int *p = NULL;

    input(&num); /*ask for num of elements ot the array*/
    
    p = (int *)malloc(num * sizeof(int)); /*allocated memory num*4 bytes */
    
    if(p == NULL){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
    } else{
        printf("Memory successfully allocated.\n");
    }

    fillArr(p,num); /*fills the array whit inf. from the keyboard*/

    printArr(p,num); /*print the array*/

    printf("\nThe total sum of the elements in the array is: %d\n ",sumArr(p,num)); /*counting the sum of the elements in the array*/

    free(p); /*free allocated*/
    printf("Memory successfully freed.\n");

    return 0;
}
void input(int *num){
    printf("Enter how many elements to be the array\n");
    scanf("%d",num);
}
void fillArr(int *p, int num){
    int i;

    for(i=0; i<num; i++){
        printf("Enter value for arr[%d]\n",i);
        scanf("%d",(p+i));
    }
}
void printArr(int *p, int num){
    int i;

    for(i=0; i<num; i++){
        printf("arr[%d] = %d\n",i,*(p+i));
    }
}
int sumArr(int *p, int num){
    int i, count = 0;

    for(i=0; i<num; i++){
        count+= *(p+i);
    }
    return count;
}