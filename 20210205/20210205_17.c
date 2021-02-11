/*Задача 16. Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана.*/

#include <stdio.h>
void input(int *a, int *b);
void multiplication(int *a, int *b, int *c);
void arrPrint(int *arr, int num);

int main(void){
    int a[5];
    int b[5];
    int c[5];

    input(a,b); /*fills the a and b arays from the keyboard*/
    multiplication(a, b, c); /*multipilaction the element from a anf b array an put the  res in array c*/
    arrPrint(c, 5); /*printing array c */

    return 0;
}
void input(int *a, int *b){
    int i;

    for(i=0; i<5; i++){
        printf("Insert value for a[%d]:\n",i);
        scanf("%d",(a+i));
        printf("\n");
        printf("Insert value for b[%d]:\n",i);
        scanf("%d",(b+i));
    }
}
void multiplication(int *a, int *b, int *c){
    int i;

    for(i=0; i < 5; i++){
        c[i] = a[i] * b[i];
    }
}
void arrPrint(int *arr, int num){
    int i;
    printf("The elemets in the array are:\n");

    for(i=0; i<num; i++){
        printf("%d\t",*(arr+i));
    }
}