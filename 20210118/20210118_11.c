/*11. Increment / decrement operators
Какво става, ако се препълни броячът?*/

#include <stdio.h>

int main() {
    int iCounter = 0;

    while( ++ iCounter < 3 ){ //след като брояча стигне до 3, ще приключи цикъла и iCounter отново ще е равен на 0
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++ iCounter);
        printf("-- Counter: %d\n", -- iCounter);
        printf("Counter ++: %d\n", iCounter ++);
        printf("Counter --: %d\n", iCounter --);
    }

return 0;
} 
