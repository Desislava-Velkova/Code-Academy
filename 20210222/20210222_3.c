/*зад.3 Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.*/

#include <stdio.h>
#include <string.h>
struct name{
    int variable1;
    char variable2[128];
    float variable3;
};

int main(void){
    struct name newvariable; /*дефинираме нова променлива*/
    
    newvariable.variable1 = 50;
    
    strcpy (newvariable.variable2 ,"chocolate");
    
    newvariable.variable3 = 2.50;

    printf("The memebers of the struct are:\nvariable1 = %d\n\
    variable2 = %s\n\tvariable3 = %.2f\n",newvariable.variable1, newvariable.variable2, newvariable.variable3);
    
    return 0;
}