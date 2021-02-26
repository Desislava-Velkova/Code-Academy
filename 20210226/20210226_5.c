/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/

#include <stdio.h>
#include <string.h>

typedef char arr_t[32];
 
void fill_arr (arr_t arg){
    strcpy(arg, "This is a test");
}

int main (){
    arr_t arg;

    fill_arr(arg);

    printf("%s\n", arg);

    return 0;
}