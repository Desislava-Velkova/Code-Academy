/*Задача 13.
Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx*/

#include <stdio.h>
#include <string.h>
void input(char *text);
void reverse(char *s);

int main(void){
    char text[50];
    void(*ptr)(char *) = NULL;

    printf("The string is: %s\n",text);

    ptr = &input; 
    ptr(text); /*calls input function with the pointer*/
    
    ptr = &reverse;
    ptr(text); /*calls reverce function with the pointer*/
 
    printf("The reverse of the string is: %s\n",text);

    return 0;
}
void input(char *text){
    char c;
    int count = 0;

    while((c=getchar()) != '\n'){
        *text++ = c;
        count++;
        if(count == 49){
            printf("You've reached the max length of the string!\n");
            break;
        }
    }
    *text = '\0';
}
void reverse(char *s){
    int i,j,buff;

    for(i =0, j =(strlen(s)-1); i < j; i++, j--){
        buff = s[i];  
        s[i] = s[j];
        s[j] = buff;
    }
}