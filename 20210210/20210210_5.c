/*Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i: 

Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи*/

#include <stdio.h>
int sum_array(const int *a, int n);
void sort( int *b, int n);

int main(void){
    const int a[] = {1,2,3,4,5,6,7,8,9,10};
    int b[] = {5,8,3,2,4,1,7,9,6,10};
    int i;

    printf("The sum of the all elements in the array is: %d\n",sum_array(a,10));
    sort(b,10);
    
    printf("\nThe ordered  array b:\n");
    for(i=0; i<10; i++){
        printf("%d\t",b[i]);
    }

    return 0;
}
int sum_array(const int *a, int n){
    int i, sum = 0;

    for(i = 0; i < n; i++){
        sum += *a++;
    }

    return sum;
}
void sort( int *b, int n){
    int i, j, temp;

    for (i=0; i < n-1; ++i){
        for (j= i+1; j < n; ++j){
            if (*(b+i) > *(b+j) ) {
                temp = *(b+i);
                *(b+i) = *(b+j);
                *(b+j) = temp;
            }
        }
    }
}