/*Задача 16. Направете същото, както в задача 15, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема. */

#include <stdio.h>
#include <string.h>

int main(void){
    char string1[] = "A string to be copied.\0";
    char string2[40];
    char string3[]= "I am very good in strings coping!\0";
    char string4[40];
 
    strcpy(string2,string1);
    printf("String2 = \"%s\"\n",string2);

    strcpy(string4,string3);
    printf("String4 = \"%s\"\n",string4);

    return 0;
}