/*Упражнение 1:
Съберете char (255 + 10).
▪ Какво ще се получи?
▪ Защо?*/

#include <stdio.h>

int main(){
    char a =255 + 10; // Ще се получи препълване на типа char, тъй като размера му е до 127. 
    printf("%d",a);

    return 0;
}