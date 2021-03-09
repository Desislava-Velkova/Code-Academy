/*Задача 8.
Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/

#include <stdio.h>

int main(void){
    FILE *fp=NULL;

    fp=fopen("test.txt", "wt+"); /*wt opens existings txt file for writing*/

    if(fp!= NULL){
        fputs("This is my first string.",fp);
        fputs("I am happy to do this",fp);
    }

    fclose(fp);
    return 0;
}