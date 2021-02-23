/*Задача 10.
Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)

enum tagEType{ 
    VALUE_INT = 1 ,
    VALUE_STR = 0
};
union testUnion{
    int num;
    char str[20];
};
struct testStruct{
    union testUnion union_member;
    enum tagEType enum_member;
};
void printStruct(struct testStruct* varStruct,  enum tagEType* varEnum);

int main(void){
    struct testStruct varStruct;

    varStruct.union_member.num = 10;
    varStruct.enum_member = VALUE_INT;
    printStruct(&varStruct, &varStruct.enum_member);
    
    strcpy(varStruct.union_member.str, "This is a test.");
    enum tagEType *ptr = &varStruct.enum_member; 
    ptr = VALUE_STR;  
    printStruct(&varStruct, ptr);

    return 0;
}
void printStruct(struct testStruct* varStruct,  enum tagEType* varEnum){
    if(varEnum){
        printf("The union member num of the struct is: %d\n",  varStruct->union_member.num);
    } else {
        printf("The union member str of the struct is:  %s\n", varStruct->union_member.str);
    }
}