/*Задача.3. Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/

#include <stdio.h>
#include <stdlib.h>
void add(int nA, int nB);
void fun2(int nA, int nB);
void fun3(int nA, int nB);
void fun4(int nA, int nB);
void input(char *operator, int *a, int *b);

int main(void){
    char operator;
    int a, b;
    void (*func_ptr[4])(int,int) = {add, fun2, fun3, fun4}; /*create array of void pointers*/
    input(&operator, &a, &b); 

    switch(operator){
        case '+':
            (*func_ptr[0]) (a, b);
            break;
        case '-':
            (*func_ptr[1]) (a, b);
            break;
        case '*':
            (*func_ptr[2]) (a, b);
            break;
        case '/':
            (*func_ptr[3]) (a, b);
            break;
        default:
            printf("You didnt choose a corect option\n");
    }

    return 0;
}
void input(char *operator, int *a, int *b){
    printf("What operation you want to see + - / * ?\n");
    scanf("%c",operator);
    printf("Enter first number to work whit\n");
    scanf("%d",a);
    printf("Enter second number to work whit\n");
    scanf("%d",b);
}
void add(int nA, int nB){ 
    printf("The result of %d + %d = %d\n", nA, nB, (nA+nB));
}
void fun2(int nA, int nB){
    printf("The result of %d - %d = %d\n", nA, nB, (nA-nB));
}
void fun3(int nA, int nB){
    printf("The result of %d * %d = %d\n", nA, nB, (nA*nB));
}
void fun4(int nA, int nB){
    printf("The result of %d / %d = %d\n", nA, nB, (nA/nB));
}