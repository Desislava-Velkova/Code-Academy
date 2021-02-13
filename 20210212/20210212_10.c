/*Задача 10*. Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където използваме char масив. Тук може да използвате друг тип. */

#include <stdio.h>
#include <stdlib.h>
int input(void);
float* allocMemory(int num);
float* fillArr(float *p, int num);

int main(void){
    int num = input();
    float *ptr = allocMemory(num);
    
    ptr = fillArr(ptr,num);

    free(ptr);
    printf("Memory successfully freed.\n");
    return 0;
}
int input(void){
    int num;

    printf("Enter how many elements to be the array\n");
    scanf("%d",&num);

    return num;
}
float* allocMemory(int num){
    float *p = NULL;
    p = (float*)calloc(num, sizeof(float)); 
    if(NULL == p){ 
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n\n");
    }
    return p; 
}
float* fillArr(float *p, int num){
    int i;

    for(i=0; i<num; i++){
        *(p+i) = i+3; 
        printf("arr[%d] = %lf\n",i,*(p+i));

        if((i+1) == num){
            p = realloc(p, 2 * sizeof(float)); 
            printf("\nYou reached the max length of the array\n"); 
            printf("Memory successfully re-allocated.\n");
        }
    }
    return p;
}