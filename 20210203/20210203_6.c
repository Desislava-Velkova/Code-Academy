/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b).*/

#include <stdio.h>
void my_swap(int *pa,int *pb);

int main (void){
    int a = 10;
    int b = 5;
    int *pa = &a;
    int *pb = &b;
    printf("The  value of a is %d\n",a);
    printf("The  value of b is %d\n\n",b);
    
    my_swap(pa,pb);

    printf("The new value of a is %d\n",a);
    printf("The new value of b is %d\n",b);
    return 0;
}
void my_swap(int *pa,int *pb){
    *pa = *pa - *pb;
    *pb = *pb + *pb;
}