/*Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.*/

#include <stdio.h>
int input(void);
int binarySearch(int a[], int n, int x);

int main(void){
    int a[] = {1,2,3,4,5,6,7,8,12,14,15,17};
    int l = sizeof(a)/sizeof(a[0]);
    int d = input();

    if(binarySearch(a,l,d) != -1){
        printf("The number that you enter is in the array at position № %d\n",binarySearch(a,l,d));
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
int binarySearch(int a[], int n, int x){
    int m, l = 0;
    
    while(l<=n)
    { 
        m=(l+n)/2;
        if (x<a[m])
            n=m-1;
        else
            if (x>a[m])
                l=m+1;
            else
                return m;
    }
    return -1;
}