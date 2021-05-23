#ifndef CHECKBARCODE_H
#define CHECKBARCODE_H

#include <stdbool.h>

int valueSymbolK(int num);
int valueSymbolC(int num);
bool isCorrectBarcode(CodeTable_t *codTable, int *bina, int counterLen);
int catIntegers(unsigned int firstNumb, unsigned int secondNumb);
bool isStartStop(CodeTable_t *codTable, int element);
int reverse(int element);
void assignBarcode(int counterLen, int *binData, CodeTable_t *codTable);
void findCodeinTable(int element, char *barcode, CodeTable_t *codTable);

#endif /*CHECKBARCODE_H*/