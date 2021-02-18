/*Задача 9. Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция.*/

#include <stdio.h>
void printArr(int (*arr)[2][2]);
void printArr_withPtr(int (*arr)[2][2]);

int main(void){
    int a[2][2][2] = {
        {{1,2} ,{3,4}},
        {{5,6} ,{7,8}} };
    
    void (*ptr)(int (*)[2][2]) = NULL; /*create pointer to function with 3d array as an argument*/
    ptr = &printArr; /*directs the pointer to printArr function*/
    ptr(a); /*calls the printArr func with the pointer*/

    ptr = &printArr_withPtr; /*directs the pointer to printArr_withPtr function*/
    ptr(a); /*calls the printArr printArr_withPtr with the pointer*/
    
    return 0;
}
void printArr(int (*arr)[2][2]){
    printf("\nThe elements in the array are:\n");

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                printf("arr[%d][%d][%d] = %d\n",i,j,k, arr[i][j][k]);  
            }
        }
    }
}
void printArr_withPtr(int (*arr)[2][2]){
    printf("\nThe elements in the array represent with pointers are:\n");

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                printf("arr[%d][%d][%d] = %d\n",i,j,k,*(*(*(arr+i)+j)+k));
            }
        }
    }
}