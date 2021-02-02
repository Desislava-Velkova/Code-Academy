/*Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му*/

#include <stdio.h>
#include <string.h>
int getline(char s[],int lim);

int main(void){
    char s[] = "This is some text\n";
    int lim;

    printf("\nThere are %d simbols in row.",getline(s,lim));
    return 0;
}
int getline(char s[],int lim){
    int i;

    for(i=0; s[i]!='\n'; i++){
            lim++;
    }
    return lim;
}