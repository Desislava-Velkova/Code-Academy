/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число. */

#include <stdio.h>
#include <string.h>

typedef struct{
    char member1[20];
    int member2;
}key_t;

void fillStruct(key_t *var);
void printStruct(key_t var);

int main(void){
    key_t var; 

    fillStruct(&var);

    printStruct(var);

    return 0;
}
void fillStruct(key_t *var){
    strcpy(var->member1, "This is a test №");
    var->member2 = 1;
}
void printStruct(key_t var){
    printf("%s %d",var.member1, var.member2);
}