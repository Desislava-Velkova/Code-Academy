/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/

#include <stdio.h>
int input(void);
int linSearch(const int *a, int n, int key);

int main(void){
    const int a[] = {1,2,3,4,5,6,7,8,12,14,15,17};
    int l = sizeof(a)/4;
    int d = input();

    if(linSearch(a,l,d) != -1){
        printf("The number that you enter is in the array at position № %d\n",linSearch(a,l,d));
    }else {
        printf("The number that you enter is not in the array.");
    }

    return 0;
}
int input(void){
    int num;

        printf("Please insert number that you want to chek is it in the array\n");
        scanf("%d",&num);

    return num;
}
int linSearch(const int *a, int n, int key){
    while(*a++ != n){
        if(*a == key){
            return *(a-1);
        }
    }
     return -1;
}