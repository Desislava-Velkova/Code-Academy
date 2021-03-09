/*Задача 6.
Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори;*/

#include <stdio.h>

int main(void){
    FILE *fp = NULL; 
    char str1[10], str2[10], str3[5]; /*3 strings for recording the str information from txt file*/

    fp = fopen ("test1.txt", "rt"); /*opens txt file in read mode*/
   
    fscanf(fp, "%s %s %s", str1, str2, str3); /*reads the text file and puts the info in the string until \n or space*/
   
    printf("Read String1 %s\n", str1 );
    printf("Read String2 %s\n", str2 );
    printf("Read String3 %s\n", str3 );

    fclose(fp);
   
    return(0);
}
   