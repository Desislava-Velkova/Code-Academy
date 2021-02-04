/*задача 1. Декларайте 3 масива с 3 елемена:
Първия от тип char
Втория от тип int
Третия от тип double
Отпечатайет размера на масивите използвайки оператора sizeof(arr)*/

#include <stdio.h>

int main(void){
    char a[3];
    int b[3];
    double c[3];
    
    printf("The size of char array is: %d\n",sizeof(a));
    printf("The size of int array is: %d\n",sizeof(b));
    printf("The size of double array is: %d\n",sizeof(c));
    
    return 0;
}