/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[] */

#include <stdio.h>
#include <string.h>
void squeeze(char s[], int c);

int main(void){
    char s[] = "Thcisc isc somec textc.";
    char c;
    printf("The letter is: \"%s\n",s);
    squeeze(s,c);
    printf("The letter is: \"%s\n",s);
    return 0;
}
void squeeze(char s[], int c){
    int i,j;

    for(i=0, j=0; i<strlen(s); i++){
        if(s[i] != 'c'){
           s[j] = s[i];
           j++;
        }
    }
    s[j] ='\0';
}