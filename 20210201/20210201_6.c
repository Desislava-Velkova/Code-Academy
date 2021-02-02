/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

#include <stdio.h>
long int multiplication(int a);

int main(void){
    printf("The multiplication of numbers from 1 to 30 is: %ld",multiplication(30));

    return 0;
}
long int multiplication(int a){
    int i;
    long int res = 1;

    for(i=1; i<=a; i++){
        res *= i;
    }
    return res;
}