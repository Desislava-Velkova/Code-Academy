/*Задача 14. Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct date{
    unsigned int day: 5;
    unsigned int month: 4;
    unsigned int year: 11;
};
void randDate(struct  date* dateVar);
int ckeckDate(struct  date* dateVar);

int main(void){
    struct date dateVar;
    void (*ptr_randFunc)(struct date*) = &randDate;
    int (*ptr_ckeckFunc)(struct date*) = &ckeckDate;

    ptr_randFunc(&dateVar);

    printf("%d/%d/%d\n",dateVar.day, dateVar.month, dateVar.year);

    (ptr_ckeckFunc(&dateVar)) ? printf("The date is valid.") : printf("The date is NOT valid.");

    return 0;  
}
void randDate(struct  date* dateVar){
    srand((unsigned int)(time(NULL)));

    dateVar->day = (rand()%31);
    dateVar->month = (rand()%12);
    dateVar->year = (rand()%20) + 2000; /*it will generate years from 2000 to 2020*/
}
int ckeckDate(struct  date* dateVar){
    int days = 31;

    if (dateVar->month == 2){ 
        days = 28;
        if (dateVar->year % 400 == 0 || (dateVar->year % 4 == 0 && dateVar->year % 100 != 0)) { /*check is it a leap year ot not*/

            days = 29;
        }
    } else if (dateVar->month == 4 || dateVar->month == 6 || dateVar->month == 9 || dateVar->month == 11) {
        days = 30;
    }

    if (dateVar->day  > days) {
        return 0;
    }  

    return 1;
}
