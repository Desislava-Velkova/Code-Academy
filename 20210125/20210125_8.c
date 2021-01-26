/*8. Използвайте функцията getchar(), с която въвеждате текст от
клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът има букви и
цифри. Принтирайте с putchar(). Използвайте условните оператори, за
да премахнете последните шпациите и табулациите в стринга*/

#include <stdio.h>
#include <string.h>

int main(void){
    char str[500];
    int i = 0, count = 0, j;
    char c;

    while((c=getchar()) != '\n'){/*Като край на файла е зададен '\n', тъй като ctr+c не сработва при мен*/
        str[i]=c;
        i++;
    }

    printf("%send\n",str);

    for(j=i-1; j>0; j--){
        if(str[j]==' ' || str[j]=='\t'){
            str[j]='\0';
        }else {
            break;
        }
    }

    printf("%s",str);
    printf("end");

    return 0;
}