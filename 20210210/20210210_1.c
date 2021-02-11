/*Задача 1. Напишете програма, която сумира всички елементи на масив
намиращи се на нечетна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането.
*/

#include <stdio.h>
int sumOddNumber(int *pArr);

int main(void){
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *pArr = &arr[1]; /*pointing pointer to 1st odd element */

    printf("The sum of odd elements in the array is: %d",sumOddNumber(pArr));

    return 0;
}
int sumOddNumber(int *pArr){
    int i, count = 0;

    for(i=0; i<10; i+=2){
        count += *(pArr+i); /*counting the odd elements*/
    }

    return count;
}