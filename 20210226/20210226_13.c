/*Задача 13.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към
дадена променлива от тип struct tagTMyTime. Напишете следните
функции: връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. В
решението трябва да се използва динамично заделяне на памет и typedef.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma pack(1)

typedef struct{
    int hour;
    int minute;
    int second;
}tagTMyTime;

int addSeconds(tagTMyTime* time1);
int addMinute(tagTMyTime* time1);
int addHour(tagTMyTime* time1);
int returnSecond(tagTMyTime* time1);
tagTMyTime SecondVar(tagTMyTime* time1);
tagTMyTime addTwoVar(tagTMyTime time1, tagTMyTime time2);
tagTMyTime subtractTwoVar(tagTMyTime time1, tagTMyTime time2);
void printFunc(tagTMyTime timeVar,int numVar);
int choise(void);
tagTMyTime* allocMemory(int choise);
void printFunc_p(tagTMyTime *timeVar);

int main(void){
    tagTMyTime time1, time2, time3, time4;
    int (*ptr_add_func)(tagTMyTime*) = NULL; /*pointer to functions*/
    
    ptr_add_func = &addSeconds; 
    time1.second = ptr_add_func(&time1); /*calls addSeconds func with the pointer*/

    ptr_add_func = &addMinute;
    time1.minute = ptr_add_func(&time1); /*calls addMinute func with the pointer*/

    ptr_add_func = &addHour;
    time1.hour = ptr_add_func(&time1); /*calls addHour func with the pointer*/

    printFunc(time1, 1);

    time2 = SecondVar(&time1);
    time3 = addTwoVar(time1,time2);

    time4 = subtractTwoVar(time1,time2);

    printFunc(time2, 2);

    printf("The result of time1 + time2:\n");
    printFunc(time3, 3);

    printf("The result of time1 - time2:\n");
    printFunc(time4, 4);

    int ch;
    tagTMyTime *ptr = NULL;

    do{
        ch = choise(); /*chek for user choise */
        ptr = allocMemory(ch);

        ptr_add_func = &addSeconds; 
        ptr->second = ptr_add_func(ptr);

        ptr_add_func = &addMinute;
        ptr->minute = ptr_add_func(ptr); 

        ptr_add_func = &addHour;
        ptr->hour = ptr_add_func(ptr);

        printFunc_p(ptr); /*print the new allocated variabel from type struct*/
    }while(ch);
    
    free(ptr); /*free allocated memory*/

    return 0;
}
int addSeconds(tagTMyTime* time1){
    srand((unsigned int)(time(NULL)));

    return (rand() % 60);
}
int addMinute(tagTMyTime* time1){
    srand((unsigned int)(time(NULL)));

    return (rand() % 60);
}
int addHour(tagTMyTime* time1){
    srand((unsigned int)(time(NULL)));

    return (rand() % 24);
}
tagTMyTime SecondVar(tagTMyTime* time1){
   tagTMyTime time2;

   time2.second = returnSecond(time1);
   time2.minute = time2.second;
   time2.hour = time2.second;

   return time2;
}
tagTMyTime addTwoVar(tagTMyTime time1, tagTMyTime time2){
    tagTMyTime time3;
    time3.minute = 0;
    time3.hour = 0;
    int num = 0;

    time3.second = (time1.second +time2.second);
    if(time3.second >= 60){
        time3.second -=60;
        time3.minute++;
    }
    time3.minute += time1.minute +time2.minute;
    if(time3.minute >= 60){
        time3.minute -=60;
        time3.hour++;
    }
    time3.hour += time1.hour +time2.hour;
    
    return time3;
}
tagTMyTime subtractTwoVar(tagTMyTime time1, tagTMyTime time2){
    tagTMyTime time3;

    if(time1.second < time2.second){
        time3.second = (time2.second - time1.second);
    } else {
        time3.second = (time1.second - time2.second);
    }
    if(time1.minute < time2.minute){
        time3.minute = (time2.minute - time1.minute);
    } else {
        time3.minute = (time1.minute - time2.minute);
    }
    if(time1.hour < time2.hour){
        time3.hour = (time2.hour - time1.hour);
    } else {
        time3.hour = (time1.hour - time2.hour);
    }
    
    return time3;
}
void printFunc(tagTMyTime timeVar, int numVar){
    printf("Time №%d: %d:%d:%d\n", numVar,timeVar.hour, timeVar.minute, timeVar.second);
}
void printFunc_p(tagTMyTime *timeVar){
    printf("Time: %d:%d:%d\n",timeVar->hour, timeVar->minute, timeVar->second);
}
int returnSecond(tagTMyTime* time1){
    return time1->second;
}
int choise(void){
    char choise;

    do{
    printf("\n\nDo you want to chek others dates ?\n Choose 'y' or 'n'\n");
    scanf("%c",&choise);
    
    fflush(stdin);
    } while(choise !='y' && choise !='n');

    if(choise == 'y'){
        return 1;
    } else {
        return 0;
    }
}
tagTMyTime* allocMemory(int choise){
    tagTMyTime *ptr = NULL;

    if(choise){
        ptr = (tagTMyTime*)malloc(sizeof(tagTMyTime));

        if(NULL == ptr){ /*chek is it allocated successfully*/
            printf("Memory not allocated!\n");
            exit(1);
        } else{
        printf("Memory successfully allocated.\n");
        }
    }else {
        printf("\nHave a nice day!\n");
    }
    return ptr;
}