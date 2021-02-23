/*Задача 4. Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина. */

#include <stdio.h>

struct date{
    short int day;
    short int month;
    short int year;
};

int main(void){
    /*1st way to init struct variable*/
    struct date var1 = {24,12,2021}; 
    printf("This is the result from the 1st way of initialization: %d/%d/%d\n", var1.day, var1.month, var1.year);
    
    /*2nd way to init struct variable*/
    var1.day = 24;
    var1.month = 12;
    var1.year = 2021;
    printf("This is the result from the 2nd way of initialization: %d/%d/%d\n", var1.day, var1.month, var1.year);

    /*3th way to init struct variable*/
    struct date var2 = {.day = 24, .month = 12, .year = 2021};
    printf("This is the result from the 3th way of initialization: %d/%d/%d\n", var2.day, var2.month, var2.year);
    
    /*4th way to init struct variable*/
    struct date *ptr = &var2;
    ptr->day = 24;
    ptr->month = 12;
    ptr->year = 2021;
    printf("This is the result from the 4th way of initialization: %d/%d/%d\n", ptr->day, ptr->month, ptr->year);

    return 0;
}