/*Задача 5
Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
    /*file  pointers to null*/
    FILE* fpIn = NULL; 
    FILE* fpOut = NULL;

    if(argc < 3) { /*if user insert less than 3 arg */
        printf("\nUsage:\n > %s infile.txt outfile.txt\n\n",argv[0]);
    } else {
        fpIn = fopen(argv[1], "r"); /*first arg is for the reading file*/
        fpOut = fopen(argv[2], "w"); /*second is for writing file*/
    }

    if(NULL != fpIn && NULL != fpOut) {
        for(;;){
            int nValue = 0;
            fscanf(fpIn, "%d", &nValue);  /*reads from the file*/
            if(feof(fpIn)) {  /*breaks the infinity loop when reached the end of the file with feof()*/
                break;
            }
            fprintf(fpOut, "%d ", nValue); /*writes in the file from arg 2*/
        }
    } else if (argc >= 3){
        fprintf(stderr, "\nFailed to open IN/OUT files\n");
    }

    /*closes the files if they were successfully open*/
    if (NULL != fpIn){ 
        fclose(fpIn);
    }

    if (NULL != fpOut){
        fclose(fpOut);
    }

    return 0;
    }