/*Задача 23.  Напишете функция, която сортира лексикографски масив от символи (char[]) използвайки qsort.*/

#include <stdio.h>
#include <string.h>
void swap(char *a, char *b);
int partition(char *arr, int low, int high);
void quickSort(char *arr, int low, int high);

int main(void){
    char letters[] = {'B','A','D','C','F','E','G','\0'};
    printf("The unsorted array is: %s\n",letters);

    int n = sizeof(letters);
    quickSort(letters, 0, n-2);

    printf("The sorted array is: %s",letters);

    return 0;
}
void swap(char *a, char *b) {
    char t;

    t = *a;
    *a = *b;
    *b = t;
}
int partition(char *arr, int low, int high) {
    char pivot = arr[high];
    int i = (low - 1);

    for(int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}
void quickSort(char *arr, int low, int high) {
    int pi;

    if(low < high){
        pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/*void sortArr(char *s){
    int i, j;
    char buf;
   
    for(i=0; s[i]; i++){
        for(j=i+1; s[j]; j++){
            if(s[i] > s[j]){
                buf = s[i];
                s[i] = s[j];
                s[j] = buf;
            }
        }
    }
}*/
