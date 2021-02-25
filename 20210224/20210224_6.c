/* Задача 6. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE:”*/

#include <stdio.h>
/* добавя префикс към функцията printf */
#define MY_PRINT(...) printf("The date of making this file is:" __VA_ARGS__)

int main(void){
    MY_PRINT(" %d/%d/%d\n", 24, 2, 2021);

return 0;
}