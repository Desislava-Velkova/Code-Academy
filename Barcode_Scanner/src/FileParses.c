#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"

#include "FileParses.h"

static int arrayLen = 0;

int takeBinDataLen(void){
    return arrayLen;
}

FILE *fileOpen(char *fileName)
{
    FILE *fp = NULL;
    fp = fopen(fileName, "r+");

    if (NULL == fp)
    {
        perror("Can't open file ");
        exit(EXIT_FAILURE);
    }

    return fp;
}

int *AllocIntArray(int size)
{
    int *iPtr = NULL;
    iPtr = (int *)malloc(sizeof(int) * size);

    if (NULL == iPtr)
    {
        printf("Allocation memory failed!\n");

        exit(EXIT_FAILURE);
    }

    return iPtr;
}

float *AllocFloatArray(int size) {
    float *fPtr = NULL;
    fPtr = (float *)malloc(sizeof(float) * size);

    if (NULL == fPtr)
    {
        printf("Allocation memory failed!\n");

        exit(EXIT_FAILURE);
    }

    return fPtr;
}

char *AllocCharArray(int size) {
    char *cPtr = NULL;
    cPtr = (char*)calloc(sizeof(char) ,size);

    if (NULL == cPtr)
    {
        printf("Allocation memory failed!\n");

        exit(EXIT_FAILURE);
    }

    return cPtr;
}

void translate(float *initialData, int *outData, int lenght) {
    for (int i = 1; i < lenght; i++)
    {
        if (initialData[i] < 0.49)
        {
           if (initialData[i]> 0.45)
           {
                if (initialData[i - 1] < 0.49 && initialData[i + 1] < 0.49)
                {
                    *outData = 0;
                    outData++;
                } else {
                    *outData = 1;
                    outData++;
                }
            } else {
                *outData = 1;
                outData++;
            }
        } else {
            *outData = 0;
            outData++;
        }
    }

}

void assignThinThickerLine(int lenght, int *tempData, int *binData) {

    for (int i = 0; i < lenght; i++)
    {
        if (tempData[i] == 1 && tempData[i + 1] == 1)
        {
            *binData = 1;
            binData++;
            i++;
            arrayLen++;
        }
        else if (tempData[i] == 1 && tempData[i + 1] == 0)
        {
            *binData = 0;
            binData++;
            i++;
            arrayLen++;
        }
    }
}

int *inputData(char *fileName) {
    float *initialData = NULL;
    int *tempData = NULL, *binData = NULL;
    int lenght = 0;
    float number = 0;

    FILE *fp = fileOpen(fileName);
    fscanf(fp, "%d", &lenght);

    initialData = AllocFloatArray(lenght);
    tempData = AllocIntArray(lenght);
    binData = AllocIntArray(lenght);

    for (int i = 0; i < lenght; i++)
    {
        fscanf(fp, " %f ", &number); /* read's tha data from the file */

        initialData[i] = number;
    }
    translate(initialData, tempData, lenght);

    assignThinThickerLine(lenght, tempData, binData);
    /*char codove[6][5];
    for (int i = 0,k=0; i < arrayLen; i+=5,k++)
    {
        for (int j = i; j < 5; j++)
        {
            codove[k][j]=binData[j]+48;
        }
        
    }

     for (int i = 0; i < 6; i++)
    {
        if (strcpy())
        {
        }
        
    }*/
    
    free(tempData);
    free(initialData);
    fclose(fp);

    return binData;
}
void inputCodeTable(CodeTable_t *codTable){
    char *fileName = "test_cases\\CodeTable.txt";
    FILE *fp = fileOpen(fileName);

    for(int i=0; i<CODE_TABLE_LEN; i++){
        fscanf(fp, " %c ", (codTable->symbols + i));
    }

    for(int i=0; i<CODE_TABLE_LEN; i++){
        fscanf(fp, " %d ", (codTable->code + i));
    }
}


