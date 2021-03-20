#include "func.h"

int main(void){
    int numOfTests = userChoice();
   
    for(int i=0; i<numOfTests; i++){
        playgroundRandomization(numOfTests);
        delay(1);
    }

    return 0;
}