/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s*/

#include <stdio.h>
#include <string.h>
void my_strncat(char *s, char *t, int num);

int main(void){
    char s[50] = "Hello! This is a test.";
    char t[] = "Another test";
    int num = 12;
    my_strncat(s,t,num);

    printf("The resul of function my_strcncat is: %s",s);

    return 0;
}
void my_strncat(char *s, char *t, int num){
    while(*s){
        *s++;  /*finding the end of 1st string*/
    }
    
    for(;num >= 0; num--){
            *s++ = *t++;  /*concatenates n symbols from string t onto the end of string s.*/
    }
}