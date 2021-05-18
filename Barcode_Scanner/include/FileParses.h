#ifndef FILEPARSES_H
#define FILEPARSES_H

#include <stdio.h>

FILE *fileOpen(char *fileName);
int *AllocMatrix(int size);
void assignCorectNumber(int number, int *bin);
void inputMatrix(void);

//TODO: izmestvane v .h na barcoda
void assignThinThickerLine(int lenght, int *bina, int *counterLen, int *bin);

#endif /*FILEPARSES_H*/
