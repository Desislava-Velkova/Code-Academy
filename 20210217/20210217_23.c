/*Задача 23.
Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи*/

#include <stdio.h>
#include <stdlib.h>
void input(int *num);
int* allocMem(int num);
void fillArr(int *p, int num);
void sortAndPrint(int *p, int num);

int main(void){
    int num;

    void (*ptr_inputFun)(int *) = &input; 
    ptr_inputFun(&num);  /*calls input function whith the pointer*/

    int *ptr = allocMem(num);

    void (*ptr_func)(int *, int ) = NULL; /*pointer to func with int pointer and int variable as a arguments*/

    ptr_func = &fillArr;
    ptr_func(ptr, num); /*calls fillArr function whith the pointer*/
     
    ptr_func = &sortAndPrint;
    ptr_Func(ptr, num); /*calls sortAndPrint function whith the pointer*/

    free(ptr); /*free dynamic allocated memory*/
    return 0;
}
void input(int *num){
    printf("Inser how number of digits you want to sort.\n");
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
void sortAndPrint(int *p, int num){
    int i, j, buff;

    for(i=0; i<num; i++){
        for(j=0; j< (num -i)-1; j++){
            if(p[j]> p[j+1]){
                buff = p[j];
                p[j] = p[j+1];
                p[j+1] = buff;
            }
        }
        printf("arr[%d] = %d\t", i, p[i]);
    }
}