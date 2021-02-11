/*Задача 18. Напишете програма за умножение на два двумерни
масиви, елемент по елемент*/

#include <stdio.h>
void input(int (*a)[2], int (*b)[2]);
void multiplication(int (*a)[2], int (*b)[2], int (*c)[2]);
void arrPrint(int (*arr)[2], int num, char letter);

int main(void){
    int a[2][2];
    int b[2][2];
    int c[2][2];

    input(a,b); /*fills the a and b arays from the keyboard*/
    multiplication(a, b, c); /*multipilaction the element from a anf b arrays an put the  res in array c*/
    arrPrint(c, 2, 'c'); /*printing array c */

    return 0;
}
void input(int (*a)[2], int (*b)[2]){
    int i,j;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Insert value for a[%d][%d]:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");

     for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("Insert value for b[%d][%d]:\n",i,j);
            scanf("%d",&b[i][j]);
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