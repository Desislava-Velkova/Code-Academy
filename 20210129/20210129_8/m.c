/*Задача 8.Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин.*/

#include <stdio.h>
#include "f.h"
#include "f.c"

int main(void){
    int a, b, c, res;
    printf("Enter two numbers which you want to sum\n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Insert number which you want to increment\n");
    scanf("%d",&c);

    res = add(a,b);
    printf("The result of %d+%d = %d\n",a,b,res);

    res = incr(c);
    printf("The result of incrementation of %d is: %d\n",c,res);
    
    return 0;
}