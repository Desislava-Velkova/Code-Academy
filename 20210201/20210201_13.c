/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/

#include <stdio.h>
#include <string.h>
void lower(char s[]);

int main(void){
    char s[] = "THIS IS SOME TEXT";
    lower(s);

    return 0;
}
void lower(char s[]){
    int i;

    for(i=0; i<strlen(s); i++){
        if(s[i]>= 'A' && s[i]<= 'Z'){
            s[i] +=' ';
        }
        putchar(s[i]);
    }
}