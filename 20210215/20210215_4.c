/*Задача 4. Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?*/

#include <stdio.h>

int main(void){
    int *ip;

    printf("%p",ip); /*%p will return the address of the pointer whose value is garbage value because he is not directed */

    return 0;
}