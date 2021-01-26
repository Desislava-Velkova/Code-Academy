/*10.Напишете функция reverse(s), която обръща символния низ
s. Използвайте я, за да напишете програма, която преобръща входа си ред
по ред.*/

#include <stdio.h>
#include <string.h>

void reverse(char str_old[], int index);/*функция за обръщане на подадените елементи*/
int getChar(char *str, int index);/*входна функция за запис на елементи от клавиатурата*/

int main(){
    char str[200];
    int index = getChar(str,199);
    printf("The entered one is: \"%s\"", str);
    reverse(str,index);
    return 0;
}
int getChar(char *str, int index){
    char c;
    int count = 0;

    while ((c=getchar()) != '\n'){
        *str++ = c;
        count++;
        if(count == index){
            break;
        }
    }
    *str ='\0';
    return count;
}
void reverse(char str_old[], int index){
    int i;
    printf("\nThe oposite one is: ");

    for(i=index; i >= 0 ; i--){
        putchar(str_old[i]);
    }
}