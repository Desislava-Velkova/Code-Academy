/*13. Ако имаме символен низ char str[] = “HELLO”, заменете
всичките символи с главна буква със съответните символи с малка
буква.*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "HELLO";
    printf("The string in lower case: %s\n", strlwr(str));
    
    return 0;
}