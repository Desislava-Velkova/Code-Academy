/*Задача 9. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). do-while цикълът e необходим, тъй като в масива s[ ] ще
трябва да се постави поне един символ, дори ако n е нула. Ако n = 123, за
да вземем последната цифра, трябва да разделим n по модул(%) на
основата на бройната система 10. За да получите чаръктър число, трябва
да съберете резултата с '0' т.е. 48. За да вземете следващото число, трябва
да разделите n на 10. Това продължава докато n е различно от нула. Това
генерира низа в обратен ред – 321, затова използваме функцията
reverse(char s[]); от задача 18 , за да обърнем низа.*/

#include <stdio.h>
#include <string.h>
void itoa(int n, char s[]);
void reverse(char s[]);

int main(void){
    int n = 457;
    char s[5]=" ";
    itoa(n,s);
    printf("%s",s);
    return 0;
}
void itoa(int n, char s[]){
     int i = 0;

     do {    
        s[i] = n % 10 + '0';   
        i++;
     }while ((n /= 10) > 0);     
     
     s[i] = '\0';
     reverse(s);
}
void reverse(char s[]){
    int i,j,buff;

    for(i =0, j =(strlen(s)-1); i < j; i++, j--){
        buff = s[i];  
        s[i] = s[j];
        s[j] = buff;
    }
}