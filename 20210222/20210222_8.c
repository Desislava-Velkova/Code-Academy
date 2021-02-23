/*Задача 8. Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/

#include <stdio.h>
#include <string.h>

enum tagEType{ 
    VALUE_INT = 1 ,
    VALUE_STR = 0
};
union test{
    int num;
    char str[20];
};
void printFunc(union test* var, enum tagEType* var2) {
    if(var2){
        printf("The int value is: %d\n", var->num);
    } else{
        printf("The string is: %s\n", var->str);
    }
}

int main(void){
    union test varUnion;
    enum tagEType varEnum = VALUE_INT;

    varUnion.num = 15;
    printFunc(&varUnion, &varEnum);

    strcpy(varUnion.str, "This is a test.");
    enum tagEType *ptr = &varEnum;
    ptr = VALUE_STR;
    printFunc(&varUnion, ptr);

    return 0;
}