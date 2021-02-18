/*Задача 5. Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fillArr(int (*arr)[5]);
void printArr(int (*arr)[5]);
void findElement(int (*arr)[5]);

int main(void){
    int arr[5][5];
    void (*func_ptr[3])(int (*arr)[5]) = {fillArr, printArr, findElement}; /*array of function pointers with 2d array as an argument*/

    (*func_ptr[0])(arr); /*calls fillArr function to fill the array with random numbers between from 0 to 10*/
    (*func_ptr[1])(arr); /*calls printArr function which prints the elements and their value in the array*/
    (*func_ptr[2])(arr); /*calls findElement function which prints the elements with value between 1 to 5*/

    return 0;
}
void fillArr(int (*arr)[5]){
    int i, j;
    
    srand((unsigned int)(time(NULL)));
    for(i=0; i<5; i++){
        for(j=0;j<5; j++){
        arr[i][j] = rand()%10; /*fills the elemetns in the array whith random numbers from 0 to 10*/
        }
    }
}
void printArr(int (*arr)[5]){
    int i, j;
    printf("\nThe elements in the array are:\n");

    for(i=0; i<5; i++){
        for(j=0;j<5; j++){
        printf("arr[%d][%d] = %d\t", i, j, arr[i][j] ); 
        }
        printf("\n");
    }
}
void findElement(int (*arr)[5]){
    int i, j;
    printf("\nThe elements whit value between 1 and 5 are:\n");

    for(i=0; i<5; i++){
        for(j=0;j<5; j++){
            if(arr[i][j]<6 && arr[i][j]>0){
                printf("arr[%d][%d] = %d\t", i, j, arr[i][j] ); 
            }
        }
        printf("\n");
    }
}