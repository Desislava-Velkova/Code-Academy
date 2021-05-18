#include <stdio.h>
#include <stdlib.h>

#include "FileParses.h"

int *AllocMatrix(int size){
    int *iPtr = NULL;
    iPtr = (int *) malloc (sizeof(int)* size);

    if(NULL == iPtr){
        printf("Allocation memory failed!\n");

        exit(EXIT_FAILURE);
    }

    return iPtr;
}

void assignCorectNumber(int number, int *bin){
    if (number > 0.5) { 
        *bin = 0;
        printf("%d",*bin);  
    }
    else {
        *bin = 1;
        printf("%d",*bin);      
    } 
}

void inputMatrix(void) {
    float number = 0;
	int lenght=0;
    FILE *fp = NULL;
    fp = fopen("test_cases\\Test1.txt", "r+");

    if(NULL == fp){
        perror("Can't open file ");
        exit(EXIT_FAILURE);
    }

    fscanf(fp, "%d", &lenght);

    int *bin = AllocMatrix(lenght); /* creating array for storage data from the file */

    for (int i = 0; i < lenght; i++) {
        fscanf(fp, " %f ",&number); /* read's tha data from the file */

		assignCorectNumber(number, &bin[i]); 
    }

    fclose(fp);
}