#include <stdio.h>
#include <stdlib.h>

#include "FileParses.h"
//#include "CheckBarcode.h"


int main(void) {
	CodeTable_t codTable;
	int *binData = inputData();
	int arrayLength = takeArrayLen();

	inputCodeTable(&codTable);

	assignBarcode(arrayLength, binData, codTable);

	//TODO da se iztrie, za test dali vrushta pravulno binarniq masiv
	printf("\n\n");

	for(int i=0; i<arrayLength; i++){
		printf("%d",binData[i]);
	}

	free(binData);
	return (0);
}