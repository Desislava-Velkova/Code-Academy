#ifndef FILEPARSES_H
#define FILEPARSES_H

#include <stdio.h>

typedef struct{
    char symbols[12];
    int code[12];
}CodeTable_t;

FILE *fileOpen(char *fileName);
int *AllocIntArray(int size);
float *AllocFloatArray(int size);
char *AllocCharArray(int size);

void translate(float *binData, int *outData, int lenght);
void assignThinThickerLine(int lenght, int *tempData, int *binData);

int *inputData(void);
void inputCodeTable(CodeTable_t *codTable);
int takeArrayLen(void);


#endif /*FILEPARSES_H*/
