/*Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.*/

#include <stdio.h>
#include <string.h>
#define KEYWORDS 32

 typedef struct{
    char member1[20];
    int member2;
}key_t;

 typedef struct{
    char member1[20];
}keywords_t;

void fillStruct( key_t kaytab[]);
void printStruct(key_t kaytab[]);

int main(void){
    key_t kaytab[KEYWORDS]; 

    fillStruct(kaytab);
    printStruct(kaytab);

    return 0;
}
void fillStruct(key_t kaytab[]){
    int i;
    
    keywords_t keywords[] = {
    "auto\0", 
    "break\0", 
    "case\0", 
    "char\0", 
    "continue\0", 
    "do\0", 
    "default\0", 
    "const\0", 
    "double\0", 
    "else\0", 
    "enum\0", 
    "extern\0", 
    "for\0", 
    "if\0", 
    "goto\0", 
    "float\0", 
    "int\0", 
    "long\0", 
    "register\0", 
    "return\0", 
    "signed\0", 
    "static\0", 
    "sizeof\0", 
    "short\0", 
    "struct\0", 
    "switch\0", 
    "typedef\0", 
    "union\0", 
    "void\0", 
    "while\0", 
    "volatile\0", 
    "unsigned\0"
    };
    for(i=0; i<KEYWORDS; i++){
        strcpy(kaytab[i].member1, keywords[i].member1);
        kaytab[i].member2 = i;
    }
}
void printStruct(key_t kaytab[]){
    int i;

    for(i=0; i<KEYWORDS; i++){
        printf("%d %s\n",kaytab[i].member2, kaytab[i].member1);
    }
}