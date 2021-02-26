/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера. */

#include <stdio.h>
typedef long long int LLI_t;

int main(void){
    LLI_t myVar = 9223372036854;

    printf("long long int number = %lld",myVar);

    return 0;
}