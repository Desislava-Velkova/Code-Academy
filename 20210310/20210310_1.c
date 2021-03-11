/*Задача 1.
Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/

#include <stdio.h> 
#include <errno.h>  
#include <stdlib.h> 

int main(void){
    int diff = 0, rows = 1;
    char ch1, ch2;
    char *fileName1 = "first.txt";
    char *fileName2 = "second.txt";

    FILE *fp1 = NULL;
    fp1 = fopen(fileName1, "r");

    if(NULL == fp1){
        perror("Error for file 1 "); /*pints the error*/
        exit(EXIT_FAILURE); /*Exit the program if the can't be open*/
    }

    FILE *fp2 = NULL;
    fp2 = fopen(fileName2, "r");

    if(NULL == fp2){
        perror("Error for file 2 "); /*pints the error*/
        exit(EXIT_FAILURE); /*Exit the program if the can't be open*/
    }
    
    do{
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);
    
        if (ch1 == '\n'){ /*count the rows*/
            rows++;
        }
        if (ch1 != ch2){ /*if characters are not the same diff will store the rows num and will break the loop*/
            diff = rows;
            break;
        }
    } while (ch1 != EOF && ch2 != EOF);
    
    /*closes the 2 files*/
    fclose(fp1);
    fclose(fp2);

    /*prints the diff*/
    (diff) ? printf("The different between %s and %s is in row %d.\n",fileName1, fileName2, diff):
    printf("The two files: %s and %s are equal.\n",fileName1, fileName2);
    
    return 0;
}