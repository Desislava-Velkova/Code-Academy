/*7) Занулете всички битове на числата, намиращи се на
четна позиция.*/

#include <stdio.h>

int main(){
    int num = 15;
    int res;
    res = num &2863311530;
    printf("%d", res);
    return 0;
}
