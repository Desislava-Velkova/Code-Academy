/*Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/

#include <stdio.h>
#include <string.h>
void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void){
    int n = 25, b = 16;
    char s[20]=" ";
    itob(n,s,b);
    printf("%s",s);

    return 0;
}
void itob(int n, char s[], int b){
     int i = 0;

     do {    
        s[i] = n % b + '0'; 
        i++;
     }while ((n /= b) > 0);     
     
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