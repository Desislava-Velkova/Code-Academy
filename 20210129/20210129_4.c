/*Задача 4. Напишете функция, която връща резултат a*2 + b*c.*/

#include <stdio.h>
int sum(void);

int main(void){
    int res = sum();
    printf("The result of a*2 + b*c is: %d\n",res);

    return 0;
}
int sum(void){
    int a,b,c;

    printf("Insert number for a:\n");
    scanf("%d",&a);
    printf("Insert number for b:\n");
    scanf("%d",&b);
    printf("Insert number for c:\n");
    scanf("%d",&c);

    return a*2 + b*c;
}