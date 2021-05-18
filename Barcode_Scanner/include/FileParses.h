#ifndef FILEPARSES_H
#define FILEPARSES_H

#include <errno.h>
#include <stdio.h>

FILE *fileOpen(char *fileName);
int *AllocMatrix(int size);
void assignCorectNumber(int number, int *bin);
void inputMatrix(void);

#endif /*FILEPARSES_H*/
