/*Задача 22. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* allocMemory(void);
void replace(char *s, char *temp);

int main(void){
    char s[] ="I am a poor programmer\0";

    char *temp = allocMemory();

    replace(s,temp);
    printf("The string is: %s\n",temp);

    free(temp);

    return 0;
}
char* allocMemory(void){
    char *temp = (char*) calloc(25,sizeof(char));

    if(NULL == temp){ 
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n");
    }
    return temp; 
}
void replace(char *s, char *temp){
    int count = 0;

    while(*s){
        if(count < 7){
            *temp++ = *s;
        } else{
            break;
        }
        *s++;
        count++;
    }
    *temp++ = 'g';
    *temp++ = 'r';
    *temp++ = 'e';
    *temp++ = 'a';
    *temp++ = 't';
    *temp++ = ' ';

    while(*s){
        if(count > 11){
            *temp++ = *s;
        }
        *s++;
        count++;
    }
}
