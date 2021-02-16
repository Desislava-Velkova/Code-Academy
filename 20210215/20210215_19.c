/*Задача 19. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема. */

#include <stdio.h>
#include <string.h>

int main(void){
    char string1[] = "A string to be copied.\0";
    char string2[] =" I am very good in strings coping!\0";
    char string3[] = "Hello, this is a test.\0";
    char string4[] ="I am very good in strings coping!\0";
    int check;
    
    memset(string2,'\0', sizeof(string2));
    strcpy(string2,string1);
    printf("String2 = \"%s\"\n",string2);
    
    memset(string4,'\0', sizeof(string4));
    strcpy(string4,string3);
    printf("String4 = \"%s\"\n",string4);

    return 0;
}
