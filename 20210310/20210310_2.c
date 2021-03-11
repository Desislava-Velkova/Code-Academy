/*Задача 2.
Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/

#include <stdio.h>
#include <error.h>
#include <stdlib.h>

void checkBrackets(FILE *fp);

int main(void){
    char *fileName = "brackets.txt";

    FILE *fp = NULL;
    fp = fopen(fileName, "r");

    if (NULL == fp){
        perror("Error");/*pints the error*/
        exit(EXIT_FAILURE); /*Exit the program if the can't be open*/
    }
    
    checkBrackets(fp);

    return 0;
}
void checkBrackets(FILE *fp){
    char ch;
    int curlyBrackets = 0, roundBrackets = 0, squareBrackets = 0, row = 0, line = 0;

    do{
        ch = fgetc(fp);

        switch (ch){
        case '{':
            curlyBrackets++;
            break;
        case '}':
            curlyBrackets--;
            break;
        case '(':
            roundBrackets++;
            break;
        case ')':
            roundBrackets--;
            break;
        case '[':
            squareBrackets++;
            break;
        case ']':
            squareBrackets--;
            break;
        }
        if (ch == '\n'){
            row++;
            if (curlyBrackets){
                line = row;
                printf("There is missing curly bracket at line %d\n",line);
                fclose(fp);
                exit(EXIT_FAILURE);
            }else if (roundBrackets){
                line = row;
                printf("There is missing round bracket at line %d\n",line);
                fclose(fp);
                exit(EXIT_FAILURE);
            }else if (squareBrackets){
                line = row;
                printf("There is missing square bracket at line %d\n",line);
                fclose(fp);
                exit(EXIT_FAILURE);
            }
        }
    }while ( ch != EOF);

    if (!line){
        printf("The brackets are all set.");
        fclose(fp);
    }
}