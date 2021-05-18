#include <stdio.h>
#include <stdlib.h>

#include "FileParses.h"

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

int *AllocMatrix(int size)
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

void assignCorectNumber(int number, int *bin)
{
    if (number > 0.5)
    {
        *bin = 0;
    }
    else
    {
        *bin = 1;
    }
}

void assignThinThickerLine(int lenght, int *bina, int *counterLen, int *bin)
{
    for (int i = 0; i < lenght; i++)
    {
        if (bin[i] == 1 && bin[i + 1] == 1)
        {
            *bina = 1;
            bina++;
            i++;
            //TODO: DA SE FIXNE NE PISHE V STOINOSTA, SAMO MESTI POITERA
            *counterLen +=1;
        }
        else if (bin[i] == 1 && bin[i + 1] == 0)
        {
            *bina = 0;
            bina++;
            i++;
            *counterLen+=1;
        }
    }
}

void inputMatrix(void)
{
    float number = 0;
    int lenght = 0;
    int counterLen = 0;
    char *fileName = "test_cases\\Test1.txt";

    FILE *fp = fileOpen(fileName);
    fscanf(fp, "%d", &lenght);

    int *bin = AllocMatrix(lenght); /* creating array for storage data from the file */
    int *bina = AllocMatrix(lenght);
    int *ptr = bina;

    for (int i = 0; i < lenght; i++)
    {
        fscanf(fp, " %f ", &number); /* read's tha data from the file */

        assignCorectNumber(number, &bin[i]);
    }
    //TODO: da se izmestqt v barcode faila
    assignThinThickerLine(lenght, bina, &counterLen, bin);
    printf("%d", counterLen);

    for (int i = 0; i < counterLen; i++)
    {
        printf(" %d ", *(ptr + i));
    }

    /* 
    int size = 5;
    int *resArray = AllocMatrix(size);
   for (int i = 0; i < counterLen; i++)
    {
        if (*(ptr + i) == 0 && *(ptr + i + 1) == 0 && *(ptr + i + 2) == 1 && *(ptr + i + 3) == 1 && *(ptr + i + 4) == 0)
        {
            i = i + 5;

            *resArray = realloc(resArray, size);
            *resArray = realloc(resArray, size);
        }
    }*/
    //TODO: da se izchsti alloca
    fclose(fp);
}
