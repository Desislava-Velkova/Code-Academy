/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float. */

#include <stdio.h>
double average(int *a, int size);

int main(void){
    int arr[] = {2,3,4,5,6,7,8,9,10};
    int size = sizeof arr / sizeof arr[0]; /*finds the lenght of the array*/
    
    printf("%lf",average(arr,size));

    return 0;
}
double average(int *a, int size){
    int i;
    double sum = 0.0;
    
    for(i=0; i<size; i++){  /*finds the total from all elements*/
        sum += *(a+i);
    }
    return sum / size; 
}