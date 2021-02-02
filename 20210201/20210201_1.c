/*Задача 1. Напишете функция, която принтира низ, пойнтера към
началото му е подаден като аргумент на функцията void printstr(char *s); Не
забравяйте, низът винаги завършва с знак за терминираща нула '\0', затова
проверката в цикъла, който принтира всеки чаръктър, трябва да е докато не
се стигне този знак. */

#include <stdio.h>
#include <string.h>
void printStr(char *s);

int main(void){
    char s[] = "Hello! This is a test.";
    printStr(s);

    return 0;
}
void printStr(char *s){
    int i;
    
    for(i=0; i<strlen(s); i++){
        printf("%c",*(s+i));
    }
}