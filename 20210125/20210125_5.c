/*5. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(‘?’). Текстът има букви и
цифри. Принтирайте с putchar() само въведените букви. Използвайте
условните оператори, за да принтирате с putchar() само малките
букви от латинската азбука а - z и големите букви A-Z.*/

#include <stdio.h>

int main(void){
    int c;

    while((c = getchar()) !='?'){
         if((c >= 65 && c<=90) || (c >= 97 && c <= 122)){
            putchar(c);
        }
    }

    return 0;
}