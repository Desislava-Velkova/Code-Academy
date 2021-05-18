#include <stdio.h>
#include <stdlib.h>

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