/*10. Оператори за присвояване
 използвайте и други оператори за присвояване */

#include <stdio.h>

int main(){
    int nResult = 13; 
    int nX = 4;
    printf("Result = %d\n",nResult);

    nResult += nX;
    printf("Result += %d\n",nResult);

    nResult = 1;
    nResult <<= nX;//0001 0001 << 4 -> 0001 0000
    printf("Result <<= %d -> %d\n",nX, nResult);
    
    nResult -= nX;
    printf("Result -= %d\n",nResult);

    nResult &= nX;
    printf("Result &= %d\n",nResult);
    return 0;
}