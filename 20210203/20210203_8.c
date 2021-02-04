/*Задача 8.Дефинирайте едномерен масив int с 10 елемента =
{100,90,80,70,60,50,40,30,20,10} Дефинирайте пойнтер, който ще сочи към
масива.
Достъпете 3 тия елемент от масива и му задайте стойност 5.
Достъпете 4 тия елемент и му задайте стойност 33.
Достъпете 5 тия елемент и го намалете със 7.
Достъпете 7 мия елемент и го увеличете с 10.
Достъпете 10 тия елемент и го умножете по 3.
Изпишете го по двата възможни начина и закоментирайте единия.
Принтирайте на екрана всички елементи на масива. */

#include <stdio.h>
void printArr_element(int *pArr);

int main(void){
    int arr[] = {100,90,80,70,60,50,40,30,20,10};
    int *pArr = arr;

    printArr_element(arr);

    return 0;
}
void printArr_element(int *pArr){
    *(pArr+2) = 5;
    *(pArr+3) = 33;
    *(pArr+4) = 7;
    *(pArr+6) = 10;
    *(pArr+9) = 3;
    /*printf("Position 3 = %d\n",arr[2]);*/
    printf("Position 3 = %d\n",*(pArr +2));

    /*printf("Position 4 = %d\n",arr[3]);*/
    printf("Position 4 = %d\n",*(pArr +3));

    /*printf("Position 5 = %d\n",arr[5]);*/
    printf("Position 5 = %d\n",*(pArr +4));

    /*printf("Position 7 = %d\n",arr[6]);*/
    printf("Position 7 = %d\n",*(pArr +6));

    /*printf("Position 10 = %d\n",arr[9]);*/
    printf("Position 10 = %d\n",*(pArr +9));
}