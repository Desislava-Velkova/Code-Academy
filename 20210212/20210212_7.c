/*Задача 7. Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/

#include <stdio.h>
#include <stdlib.h>
void input(int *num);
int* allocMem(int num);
void fillArr(int *p, int num);
void printArr(int *p, int num);

int main(void){
    int num;
    int *p = NULL;

    input(&num); /*ask for num of elements ot the array*/
    
    p = allocMem(num); /*allocate memory for num * 4 bytes*/

    fillArr(p,num); /*fills the array from the keyboard*/

    printArr(p,num); /*print the array*/

    free(p); /*free allocated*/
    printf("Memory successfully freed.\n");

    return 0;
}
void input(int *num){
    printf("Enter how many elements to be the array\n");
    scanf("%d",num);
}
int* allocMem(int num){
    int *p = NULL;
    p = (int *)calloc(num, sizeof(int)); /*allocated memory num*4 bytes */
    
    if(NULL == p){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n");
    }
    return p; 
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