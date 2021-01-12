/*6) Променете стойността на бита на дадено число на
определена позиция.*/
#include <stdio.h>

int main(){
    int num, index, x, res;
    num = 4;
    index = 1;
    x = 1;
    x = x << index;
    res = x^num;

    printf("%d", res);
    
    return 0;
}