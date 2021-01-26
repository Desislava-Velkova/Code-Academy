/*7. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът да отпечатва
само входни редове, които са по дълги от 80 символа.*/

#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000];
    char c;
    int i = 0, j = 0, count = 0, new_line = 0;
    int str_len;

    while ((c=getchar()) != EOF){
        str[i] = c;
        i++;
    }
    str_len = strlen(str);
    printf("\nStr len: %d\nThe string entered: %s\n",str_len,str);

    for(i=0; i<str_len; i++){
        if(str[i] != '\n'){
            count++;
        }else {
            if(count >= 80){
                printf("\nThe row has more than 80 symbols (%d):",count);
                for(j=new_line; j<i; j++){
                    putchar(str[j]);
                }
            }
            new_line += (count + 1);
            count = 0;
        }
    }

    return 0;
}