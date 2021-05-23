#include <stdio.h>
#include <stdlib.h>

#include "FileParses.h"
#include "CheckBarcode.h"


int main(void) {
	CodeTable_t codTable;
	char *fileName = "test_cases\\Test2.txt";

	int *binData = inputData(fileName);

	int BinDataLength = takeBinDataLen();

	inputCodeTable(&codTable);

	//if (isCorectReaded(int counterLen, int *binData, CodeTable_t *codTable))

	char *barcode = assignBarcode(BinDataLength, binData, &codTable);
	

	int barcodeLength = takeBarcodeLen();

	printBarcode(barcode, barcodeLength);


	free(barcode);
	free(binData);
	
	return 0;
}