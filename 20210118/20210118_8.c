/*8. Напишете функция int isLetter(char c), която проверява дали
подадения параметър е буква или не е буква от ASCII таблицата.
Използвайте я в main(), заедно с функцията getchar(). */

#include <stdio.h>
int isLetter(char c);

int main(){
    char a;
    printf("Hi, please insert symbol from the keyboard\n");
    a = getchar();

    (isLetter(a)) ? printf("The symbol is letter"): printf("The symbol is NOT a letter");
    
    return 0;
}
int isLetter(char c){
    return ((c > 64 && c < 91) || (c > 96 && c < 123))? 1 : 0;
}