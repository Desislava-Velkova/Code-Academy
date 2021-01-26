/*6.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue.*/

#include <stdio.h>

int main(void){
    int c, count_letter = 0, count_num = 0;

    while((c = getchar()) !=EOF){
        if((c >= 65 && c<=90) || (c >= 97 && c <= 122)){
            count_letter++;
        }else if(c >= 48 && c <= 57){
            count_num++;
            continue; 
        }
    }
    
    printf("Numbers: %d\n Letters: %d",count_num,count_letter);

    return 0;
}