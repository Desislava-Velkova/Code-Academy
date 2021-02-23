/*Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum tagEType{ 
    VALUE_INT = 1 ,
    VALUE_STR = 0
};
union test{
    int num;
    char str[20];
};
void convert(union test* varUnion, enum tagEType* varEnum){
    if(varEnum){
        itoa(varUnion->num, varUnion->str, 10);
        printf("String: %s\n", varUnion->str);
    } else {
        varUnion->num = atoi(varUnion->str);
        printf("Int number: %d\n", varUnion->num);
    }
}

int main(void){
    union test varUnion;
    enum tagEType varEnum = VALUE_INT;

    varUnion.num = 321;
    varEnum = VALUE_INT;
    convert(&varUnion, &varEnum);

    strcpy(varUnion.str,"123");
    enum tagEType *ptr = &varEnum;  
    ptr = VALUE_STR; 
    convert(&varUnion, ptr); /*calls the convert function with ptr to enum VAULE_STR*/

    return 0;
}