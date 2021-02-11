/*Задача 20. Дефинирайте 2 масива с по 10 елемента, А и В, напълнете ги
със случайни числа от 0 до 20, умножете всеки от елементите А[i]*В[i] и
напишете резултата на екрана.
Вариация: Модифицирайте така, че да извежда резултат от целочислено
деление. (Каква проверка трябва да направите?)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fillRandom(int (*a)[2], int (*b)[2]);
void multiplication(int (*a)[2], int (*b)[2], int (*c)[2]);
void arrPrint(int (*arr)[2], int num, char letter);


int main(void){
    int a[2][2];
    int b[2][2];
    int c[2][2];

    fillRandom(a,b); /*fills a and b arrays whit random numbers*/
    arrPrint(a,2,'a'); /*printing a array*/
    arrPrint(b,2,'b'); /*printing b array*/
    multiplication(a,b,c); /*multipilaction the element from a and b array an put the  res in arrays c*/
    arrPrint(c,2,'c'); /*printing c array*/
  
    return 0;
}
void fillRandom(int (*a)[2], int (*b)[2]){
    int i,j,k;
    srand((unsigned int)(time(NULL)));

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            a[i][j] = (rand()% 15)+1;
            b[i][j] = (rand()% 10)+1;
        }
    }
}
void multiplication(int (*a)[2], int (*b)[2], int (*c)[2]){
     int i,j;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
           c[i][j] = a[i][j] * b[i][j];
        }
    }
}
void arrPrint(int (*arr)[2], int num, char letter){
    int i,j;
    printf("\nThe elemets in the array \'%c\'are:\n",letter);

    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            printf("%d\t",arr[i][j]);
        }
    }
}