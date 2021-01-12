/*12) Вдигнете всички битове на число, на позиции делящи
се на 3.*/

#include <stdio.h>

int main(){
    int num = 1025;
    int mask = 1;

    num = num | mask; //0100 0000 0001
    mask = mask << 3; //0000 0000 1000

    num = num | mask; //0100 0000 1001
    mask = mask << 3; //0000 0100 0000
    num =  num | mask; //0100 0100 1001
    mask = mask << 3; //0010 0000 0000
    num = num | mask; //0110 0100 1001

    printf("%d", num);

    return 0;
}
