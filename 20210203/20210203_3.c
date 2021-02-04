/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/

#include <stdio.h>
int input(void);
int linSearch(int a[], int l, int d);

int main(void){
    int a[] = {1,2,3,4,5,6,7,8,12,14,15,17};
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
int linSearch(int a[], int l, int d){
    int i;

    for(i=0; i<l; i++){
        if(a[i] == d){
            return i;
        }
    }
     return -1;
}