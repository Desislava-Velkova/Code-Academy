/*9) Направете на нула битовете в числа, намиращи се на
позиции между 3 и 7*/

#include <stdio.h>

int main (){
    int num = 14576;
    int mask = ~252;
    int res;
    res = mask & num;

    printf("%d", res);

    return 0;
}