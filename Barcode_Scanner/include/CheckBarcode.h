#ifndef CHECKBARCODE_H
#define CHECKBARCODE_H

#include <stdbool.h>


int takeBarcodeLen(void);
bool isCorrectBarcode(CodeTable_t *codTable, int *bina, int counterLen);
bool isStartStop(CodeTable_t *codTable, int element);
int checkC(char* decoded,int size);
int checkK(char* decoded,int size);
bool checkSumValidation(char *decoded, int size);

int catIntegers(unsigned int firstNumb, unsigned int secondNumb);
char *assignBarcode(int counterLen, int *binData, CodeTable_t *codTable);
void findCodeinTable(int element, char *barcode, CodeTable_t *codTable);
void printBarcode(char *array, int size);
int *reverse(int *arr, int n);
#endif /*CHECKBARCODE_H*/