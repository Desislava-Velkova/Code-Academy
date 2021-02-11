/*Задача 20. Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак.*/

#include <stdio.h>
int sum(int (*arr)[2][2]);
void compareArr(int sum_a, int sum_b);

int main(void){
    int a[2][2][2] = {
        {{3, 4,}, {9, 11}},
        {{13, 4}, {5, 9}} };

    int b[2][2][2] = {
        {{8, 2,}, {0, 1}},
        {{3, 4}, {5, 7}} };

    int sum_a, sum_b;

    sum_a = sum(a);
    printf("sum_a = %d\n",sum_a);
    
    sum_b = sum(b);
    printf("sum_b = %d\n",sum_b);

    compareArr(sum_a,sum_b);

    return 0;
}
int sum(int (*arr)[2][2]){
    int i, j, k, sum = 0;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
                sum += arr[i][j][k];
            }
        }
    }
    return sum;
}
void compareArr(int sum_a, int sum_b){
    if(sum_a > sum_b){
        printf("A array is greater than B array\n");
    }else if(sum_a < sum_b){
        printf("B array is greater than A array\n");
    } else {
         printf("A array and B array are equal\n");
    }
}