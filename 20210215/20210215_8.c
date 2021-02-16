/*Задача 8.
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/

#include <stdio.h>

int main(void){
    char character = 'd'; 
    char *iPtr = &character;

    printf("The adress of the pointer is: %p",iPtr);

    return 0;
}