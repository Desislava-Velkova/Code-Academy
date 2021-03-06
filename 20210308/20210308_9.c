/*Задача 9.
Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    char str[50] = "This is a test"; 
    FILE *fptr = fopen("test1.txt", "wt+"); /*open file in write mode */

    if (fptr == NULL) { 
        perror ("Error opening file");
        return(-1);
    } 
   
    fprintf(fptr,"%s\n", str); /*writing the string in test1.txt*/

    fclose(fptr); 
   
    return 0; 
}