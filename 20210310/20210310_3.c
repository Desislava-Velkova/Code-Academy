/*Задача 3.
Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номерa на всяка
страница за всеки файл.*/

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    int i = 0, ch, countRow = 0, countPage = 1;

    if (argc == 1){
        printf("There is no input file!");
        exit(EXIT_FAILURE);
    }
    
    FILE *fp1 = NULL, *fp2 = NULL;

    fp2 = fopen("task3.txt", "w");
    if (NULL == fp2){
        perror("Error");/*pints the error*/
        exit(EXIT_FAILURE); /*Exit the program if the can't be open*/
    }

    for(i=1; i<argc; i++, countRow++){
        fp1 = fopen(argv[i], "r"); /*opens file in read mode*/
        if (NULL == fp1){
            perror("Error");/*pints the error*/
            exit(EXIT_FAILURE); /*Exit the program if the can't be open*/
        }
        
        do{
            if( !(countRow % 40)){
                fprintf(fp2,"Title %s\n\n",argv[i]); /*writes the title for the page of file*/
                countRow++;
            }
            ch = fgetc(fp1);   /*writes the info from fp1 in file 2*/
            fputc(ch,fp2);
        
            if(ch == '\n'){ 
                countRow++;   
            }
            if (countRow == 40){
                fprintf(fp2,"\n\tPage %d\n\n",countPage); /*Writes in the end of the page (wich is 40 pages) the num of page*/
                countRow = 0;
                countPage++;
            }
        }while (ch != EOF); 
        
        fclose(fp1);  /*close the file for reading*/
    }
    
     fclose(fp2); /*close the file for writing*/
    
    return(EXIT_SUCCESS);
}