/*Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/

#include <stdio.h>
typedef long long int LLI_t;

int main(void){
    LLI_t myVar = 9223372036854;

    typedef *ptr_t  = &LLI_t myVar;

    printf("long long int number = %lld",*ptr_t);

    return 0;
}