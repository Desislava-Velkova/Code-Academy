/*Задача 5. Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct date{
    short int day;
    short int month;
    short int year;
};

int main(void){
    int i;

    /*1st way to init members of struct array*/
    struct date arr[10] ={{24,12,2021},{12,12,2019},{10,10,2021},{10,10,2019},
    {8,9,2009},{1,1,2001},{12,8,2000},{2,2,1988},{6,7,2007},{8,10,2008}}; 
    
    printf("This is the result from the 1st way of initialization:\n");
    for(i=0; i<10; i++){
        printf("\tarr[%d]: %d/%d/%d\n", i, arr[i].day, arr[i].month, arr[i].year);
    }
    
    /*2nd way to init memebrs of struct array*/
    srand((unsigned int)(time(NULL)));

    printf("\n\nThis is the result from the 2nd way of initialization:\n");
    for(i=0; i<10; i++){    /*fills the day and month members with random numbers and years members with year from 2000 to 2009*/
        arr[i].day = (rand()%31)+1;   
        arr[i].month = (rand()%12)+1;
        arr[i].year = 2000 + i;
        printf("\tarr[%d]: %d/%d/%d\n", i, arr[i].day, arr[i].month, arr[i].year);
    }
    
    /*3th way to init members of struct array*/
    struct date arr2[10] = {{.day=24, .month=12, .year=2021},{.day=12,.month=12,.year=2019},{.day=10,.month=10,.year=2021},
    {.day=10,.month=10,.year=2019},{.day=8, .month=9,.year=2009},{.day=1,. month=1, .year=2001},{.day=12, .month=8, .year=2000},
    {.day=2, .month=2, .year=1988},{.day=6, .month=7, .year=2007},{.day=8, .month=10, .year=2008}}; 
    
    printf("\n\nThis is the result from the 3dth way of initialization:\n");
    for(i=0; i<10; i++){
        printf("\tarr[%d]: %d/%d/%d\n", i, arr2[i].day, arr2[i].month, arr2[i].year);
    }

    /*4th way to init members of struct array*/
    struct date (*ptr)[10] = &arr2;

    printf("\n\nThis is the result from the 4th way of initialization:\n");
    for(i=0; i<10; i++){    /*fills the day and month members with random numbers and years members with year from 2000 to 2009*/
        (*(ptr+i))->day = (rand()%31)+1;   
        (*(ptr+i))->month = (rand()%12)+1;
        (*(ptr+i))->year = 2000 + i;
        printf("\tarr[%d]: %d/%d/%d\n", i, (*(ptr+i))->day, (*(ptr+i))->month, (*(ptr+i))->year);
    }

    return 0;
}