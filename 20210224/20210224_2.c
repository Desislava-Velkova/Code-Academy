/*2. Напишете макрос swap(t, x, y), койти променя местата на двата аргумента
от тип t.*/

#include <stdio.h>
#define swap(t, x, y) {t i=x; x=y; y=i;}

int main(void){
    int x = 2;
    int y = 4;
    char a = 'a';
    char b = 'b';

    swap(int,x,y);
    printf("The value of x=%d, and the value of y=%d\n",x,y);

    swap(char,a,b);
    printf("The value of char a = '%c', and the value of char b = '%c' \n",a,b);


    return 0;
}