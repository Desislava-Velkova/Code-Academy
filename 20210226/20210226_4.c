/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/

#include <stdio.h>
int add(int *Aptr, int *Bptr);

int main(void){
    int a= 5, b =10;

    typedef int* PtrA_t; 
    typedef int* PtrB_t;

    PtrA_t Aptr= &a;
    PtrB_t Bptr= &b;

    printf("The res is: %d",add(Aptr, Bptr));

    return 0;
}
int add(int *Aptr, int *Bptr){
    return ((*Aptr) + (*Bptr));
}