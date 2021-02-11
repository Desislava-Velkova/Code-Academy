/*Задача 19. Напишете програма за умножение на два тримерни
масива, елемент по елемент.*/

#include <stdio.h>
void input(int (*a)[2][2], int (*b)[2][2]);
void multiplication(int (*a)[2][2], int (*b)[2][2], int (*c)[2][2]);
void arrPrint(int (*arr)[2][2], int num);

int main(void){
    int a[2][2][2];
    int b[2][2][2];
    int c[2][2][2];

    input(a,b); /*fills the a and b arays from the keyboard*/
    multiplication(a, b, c); /*multipilaction the element from a and b arrays an put the  res in array c*/
    arrPrint(c, 2); /*printing array c */

    return 0;
}
void input(int (*a)[2][2], int (*b)[2][2]){
    int i,j,k;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
                printf("Insert value for a[%d][%d][%d]:\n\n",i,j,k);
                scanf("%d",&a[i][j][k]);
            }
        }
    }
     for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
                printf("Insert value for b[%d][%d][%d]:\n\n",i,j,k);
                scanf("%d",&b[i][j][k]);
            }
        }
    }
}
void multiplication(int (*a)[2][2], int (*b)[2][2], int (*c)[2][2]){
    int i,j,k;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
                c[i][j][k] = a[i][j][k] * b[i][j][k];
            }
        }
    }
}
void arrPrint(int (*arr)[2][2], int num){
    int i,j,k;
    printf("The elemets in the array are:\n");

    for(i=0; i<num; i++){
        for(j=0; j<num; j++){
            for(k=0; k<num; k++){
                printf("%d\t",arr[i][j][k]);
            }
        }
    }
}