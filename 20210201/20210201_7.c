/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/

#include <stdio.h>
long int multiplication(int a);
int res = 1;

int main(void){
    printf("The multiplication of numbers from 1 to 30 is: %ld",multiplication(30));

    return 0;
}
long int multiplication(int a){
    res = res * a;
    if ( a >=2 ){
     return multiplication(a - 1);
    }else{
     return res;
    }
}