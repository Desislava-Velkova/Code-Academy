/*Задача 9. Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко памет иска и заделя съответния блок памет.
След това попитайте потребителя за нов размер и използвайте функция, която прави това.*/

#include <stdio.h>
#include <stdlib.h>
int input(void);
int* allocMemory(int num);
int* re_alloc(int *p, int num);

int main(void){
    int num = input(); /*ask for the size of the array*/
    int *p = allocMemory(num);
    
    printf("Enter how many bytes of memory you want for new allocation\n");
    scanf("%d",&num);
    p = re_alloc(p,num);

    free(p);
    printf("\nThe memory is sucsesfully freed.\n");

    return 0;
}
int input(void){
    int num;

    printf("Enter how many bytes of memory you want to allocate\n");
    scanf("%d",&num);

    return (num /= sizeof(int));
}
int* allocMemory(int num){
    int *p = (int*)calloc(num, sizeof(int));

    if(NULL == p){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n");
    }
    printf("The adress of memory allocation whit calloc is: %p\n",p);
    return p; 
}
int* re_alloc(int *p, int num){
    p = realloc(p, num * sizeof(int));

   if(NULL == p){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully reallocated.\n");
    }
    printf("The adress of memory reallocation is: %p\n",p);
    return p;
}