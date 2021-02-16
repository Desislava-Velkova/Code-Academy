/*Задача 21.  Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“ */

#include <stdio.h>
#include <string.h>
void replace(char *s);

int main(void){
    char s[] = "Baba, kaka, mama\0";
    
    replace(s);

    printf("The string is: %s\n",s);
    
    return 0;
}
void replace(char *s){
    while(*s){
        if(*s == 'a'){
            *s='o';
        }
        *s++;
    }
}