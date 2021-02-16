/*Зад.12 Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 2
/*За да е по-лесно за проверка сложих масива да е с размери 2х2х2, а не както е по задание 10х10х10. 
Поради тази причина съм задала, чрез предпроцесорната директива define дължината на масива, за да може лесно да се промени на 10 без
да е необходимо да се сменя целия код.*/

int main(void){
    int arr[LENGTH][LENGTH][LENGTH]; 
    int *pi = (int*)arr;
    int i, total_elements;
    total_elements = LENGTH * LENGTH * LENGTH;  
    float count = 0;

    srand((unsigned int)(time(NULL)));

    for(i=0; i<total_elements; i++){
        *(pi+i) = rand()%10; /*fills the elemetns in the array whith random numbers from 0 to 10*/
        printf("arr[%d] = %d\n", i, *(pi+i)); /*print the elements in the array*/
        count += *(pi+i); /*count the total sum of the elements in the array*/
    }
    count /= total_elements;

    printf("The average value in the array is: %.3f",count);
    
    return 0;
}
