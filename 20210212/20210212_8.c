/*Задача 8. Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/

#include <stdio.h>
#include <stdlib.h>
void input(int *num);
float* allocMemory(int num);

int main(void){
    int num;
    float *p;
    input(&num);

    p = allocMemory(num); /*allocated memory whit alloca for float array*/
    printf("The adress of the new array is: %p",p);
    
    return 0;
}
void input(int *num){
    printf("Enter how many elements to be the array\n");
    scanf("%d",num);
}
float* allocMemory(int num){
    float *p = NULL;
    p = (float*)alloca(num * sizeof(float));

    if(NULL == p){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n");
    }
    return p; 
}