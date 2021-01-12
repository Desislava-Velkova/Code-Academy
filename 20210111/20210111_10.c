/*10) Премахнете всички битове на число след n-тия бит
включително.*/

#include <stdio.h>

int main (){
    int num = 5415;
    int index = 5;
    int mask = ~0;
    int res;
    
    mask = mask << index;
    mask = ~mask;
    res = mask & num;

    printf("%d", res);

    return 0;
}