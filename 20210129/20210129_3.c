/* Задача 3. Напишете функция, която връща резултат (а+в)*4.*/

#include <stdio.h>
int sum(void);

int main(void){
    int res = sum();
    printf("The result of (a+b)*4 is: %d\n",res);

    return 0;
}
int sum(void){
    int a,b;

    printf("Insert number for a:\n");
    scanf("%d",&a);
    printf("Insert number for b:\n");
    scanf("%d",&b);

    return (a+b)*4;
}