/*Задача 6.
Опишете времето в структура: часове:минути:секунди като структура tagTMyTime.
Използвайки тази структура, дефинирайте следните функции: добавяне на секунди,
добавяне на минути. Добавяне на часове към дадена променлива от тип struct
tagTMyTime. Напишете следните функции: връщане на броя секунди за дадена
променлива от въведения тип и обратна функция от секундите да се генерира
променлива tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct tagTMyTime{
    int hour;
    int minute;
    int second;
};
int addSeconds(struct tagTMyTime* time1);
int addMinute(struct tagTMyTime* time1);
int addHour(struct tagTMyTime* time1);
int returnSecond(struct tagTMyTime* time1);
struct tagTMyTime SecondVar(struct tagTMyTime* time1);
struct tagTMyTime addTwoVar(struct tagTMyTime time1, struct tagTMyTime time2);
struct tagTMyTime subtractTwoVar(struct tagTMyTime time1, struct tagTMyTime time2);
void printFunc(struct tagTMyTime timeVar,int numVar);

int main(void){
    struct tagTMyTime time1, time2, time3, time4;
    int (*ptr_add_func)(struct tagTMyTime*) = NULL; /*pointer to functions*/
    
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

    return 0;
}
int addSeconds(struct tagTMyTime* time1){
    srand((unsigned int)(time(NULL)));

    return (rand() % 60);
}
int addMinute(struct tagTMyTime* time1){
    srand((unsigned int)(time(NULL)));

    return (rand() % 60);
}
int addHour(struct tagTMyTime* time1){
    srand((unsigned int)(time(NULL)));

    return (rand() % 24);
}
struct tagTMyTime SecondVar(struct tagTMyTime* time1){
   struct tagTMyTime time2;

   time2.second = returnSecond(time1);
   time2.minute = time2.second;
   time2.hour = time2.second;

   return time2;
}
struct tagTMyTime addTwoVar(struct tagTMyTime time1, struct tagTMyTime time2){
    struct tagTMyTime time3;
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
struct tagTMyTime subtractTwoVar(struct tagTMyTime time1, struct tagTMyTime time2){
    struct tagTMyTime time3;

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
void printFunc(struct tagTMyTime timeVar, int numVar){
    printf("Time №%d: %d:%d:%d\n", numVar,timeVar.hour, timeVar.minute, timeVar.second);
}

int returnSecond(struct tagTMyTime* time1){
    return time1->second;
}
