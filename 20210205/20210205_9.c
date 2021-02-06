/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/

#include <stdio.h>
void my_strncpy(char *s, char *t, int num);

int main(void){
    char s[] = "Hello! This is a test.";
    char t[] = "Another test";
    int num = 8;
    my_strncpy(s,t,num);

    printf("The resul of function my_strncpy is: %s",s);

    return 0;
}
void my_strncpy(char *s, char *t, int num){
    
    for(;*s; *s++,*t++){
        if(num >= 0){
            *s = *t;
        }
         num--;
    }
}