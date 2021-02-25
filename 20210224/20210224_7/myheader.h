#include <stdio.h>

void input(int *a, int *b){
    printf("Enter value for the first number 'a'\n");
    scanf("%d",a);

    printf("Enter value for the second number 'b'\n");
    scanf("%d",b);
}
int add(int a, int b){
    return (a+b);
}
int subtraction(int a, int b){
    return (a<b) ? (b-a) : (a-b);
}
int multiplication(int a, int b){
    return (a*b);
}
int division(int a, int b){
    return (a/b);
}