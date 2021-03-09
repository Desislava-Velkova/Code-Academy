/*Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
    char c;
    char *oldName = "C:\\Users\\stifa\\codeAcademy\\Code-Academy\\20210308\\test.txt";
    char *newName = "C:\\Users\\stifa\\codeAcademy\\Code-Academy\\20210308\\new.txt";

    FILE *fp = NULL;
    
    fp = fopen(oldName, "r"); /*opens txt in read mode*/
    if(NULL == fp){
        perror("Error opening file!");
        return -1;
    }
    
    FILE *fp2 = NULL;
    fp2 = fopen(newName, "w"); /*opens txt in write mode*/

    if(NULL == fp2){
        perror("Error opening file!");
        return -1;
    }

    do {
        c = fgetc(fp);
        if( feof(fp) ) {
            break ;
        }
        if (c >= 'a' && c <= 'z') {
            c = c - 32;
        }
        printf("%c", c);
        fputc(c,fp2);

    } while(1);


    fclose(fp);
    fclose(fp2);
    remove ("test.txt"); /*delete the old one*/

    int ret = rename(newName,"test.txt"); /*if rename is successfull it will return 0, else it will return -1*/

    if(ret == 0)
        printf("File renamed successfully.");
    else
        printf("Failed to rename file.");
    

    
    return 0;
}
