#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Defines.h"
#include "FileParses.h"
#include "CheckBarcode.h"

int valueSymbolC(int num){
    int cValue = 0;
    /*
    for(int i = 1; i<=num; i++){
       cValue = ( ( (num-i)%10 + 1 ) * valaue_of_element) % 11;
    }
    */
    return cValue;
}

int valueSymbolK(int num){
    int kValue = 0;
    /*
    for(int i = 1; i<=num+1; i++){
       cValue = ( ( (num-i - 1)%9 + 1 ) * valaue_of_element) % 11;
    }
    */
    return kValue;
}

bool isCorrectBarcode(CodeTable_t *codTable, int *bina, int counterLen){
    int element = 0;

    for (int i = 0; i < counterLen; i++) {
        if ( i%SIZE_ELEMENT==0 ) {
            if(isStartStop(codTable, element)){
               return true;
            } else {
                element = 0;
            }
        } else {
            element = catIntegers(element, bina[i]);
        }
    }
    
    return false;
} 

void assignBarcode(int counterLen, int *binData, CodeTable_t *codTable){
    int element = 0, size = 1;
    char *barcode = AllocCharArray(size);
    
    if(isCorrectBarcode(codTable, binData, counterLen)){
        for (int i = 0; i < counterLen; i++) {
            if ( i%SIZE_ELEMENT==0 ) {
                findCodeinTable(element, barcode, codTable);
                barcode = realloc(barcode, size);
                element = 0;//TODO segfault ako se napravi da e razlichno ot 0, taka napisano izpuska vseki peti el.

            } else {
                element = catIntegers(element, binData[i]);
            }
        }
    } else {
        printf("Barcode truncated. Move the scanner to the left.\n");
    }
}

void findCodeinTable(int element, char *barcode, CodeTable_t *codTable){

    for(int i=0; i<CODE_TABLE_LEN; i++) {
        if(element == codTable->code[i] && !isStartStop(codTable, element)) {
            *barcode = codTable->symbols[i];
            printf("\n%c",*barcode);//TODO za test, da se iztrie
            break;
        }
    }

}

int catIntegers(unsigned int firstNumb, unsigned int secondNumb){
    char str1[SIZE_ELEMENT];
    char str2[SIZE_ELEMENT];

    sprintf(str1,"%d",firstNumb);
    sprintf(str2,"%d",secondNumb);

    strcat(str1,str2);

    return atoi(str1);
}

int reverse(int element){
    //TODO da se fix-ne 
    /*
    trqbva da izmislim da obrushta elementa i da go vrushta kato int
    */
    element = 00110;

    return element;
}

bool isStartStop(CodeTable_t *codTable, int element){
    if (element == codTable->code[11] || reverse(element) == codTable->code[11]){
        return true;
    } else{
        return false;
    }  
}
