/*8) Намерете позицията на най-старшия бит, който е със
стойност 1 в дадено число.*/

#include <stdio.h>

int main (){
    int num = 83;
    int mask, res;
    int index = 0;

    for(mask=1; mask<num; mask<<=1){ 
        if(mask & num){
            res = mask&num;
        }   
    }
    for(mask=1; mask!=res; mask<<=1){ 
        index++;   
    }

    printf("%d", index);
    return 0;
}
