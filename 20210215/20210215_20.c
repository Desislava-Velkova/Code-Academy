/*Задача 20.  Връщаме се на кода написан в задача 17. Нека сега отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали размерът на стринга,
в който копираме, не е по-малък от размера на стринга, от който копираме, и какво да се случва тогава. */

#include <stdio.h>
#include <string.h>
int copyString(char *to, char *from);

int main(void){
    char string1[] = "A string to be copied.\0";
    char string2[] =" I am very good in strings coping!\0";
    char string3[] = "Hello, this is a test.\0";
    char string4[] ="I am very good in strings coping!\0";
    int check;

    check = copyString(string1,string2);
    (check) ? printf("String1 = \"%s\"\n",string1): printf("The string you try to copy is to large.\n");

    check = copyString(string4,string3);
    (check) ? printf("String4 = \"%s\"\n",string4): printf("The string you try to copy is to large.\n");

    return 0;
}
int copyString(char *to, char *from){
    int i, len = strlen(from);

    while (*from){
        *to++;
        *from++;
    } 
    for(i=len; i>=0; i--){
        if(strlen(to) < strlen(from)){
            return 0;
        }
         *to-- = *from--;
    }
    *to = '\0';
    return 1;
}