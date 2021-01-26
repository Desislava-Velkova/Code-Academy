/*9. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът се принтира с
putchar(), като преобразува главните букви в малки*/

#include <stdio.h>
#include <ctype.h>

int main(){
    int c;

    while((c=getchar()) != EOF){
        c=toupper(c);
        putchar(c);
    }
    return 0;
}