/*Задача 7.
Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека*/

#include <stdio.h>

int main(void){
    FILE *fp;
    int ch;

    fp = fopen("test1.txt", "wt+"); /*open the existing txt file in write mode*/

    for(ch=43; ch <= 100; ch++){ 
    /*writes a character specified by the argument char advances the position indicator for the stream.*/
        fputc(ch,fp); 
    }

    fclose(fp);

    return 0;
}