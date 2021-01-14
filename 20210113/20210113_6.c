/*6. Дефинирайте променливи със стойност -127, 255, 6 237 498, 4 294 967 292, -9
000 000 000 000 775 845.
Изведете всяка променлива на екрана със printf() */

#include <stdio.h>

int main(){
    short int a = -127;
    unsigned char b = 255;
    int c = 6237498;
    unsigned int d = 4294967292;
    long long int e = -9000000000000775845;

    printf("A = %d\n",a);
    printf("B = %d\n",b); 
    printf("C = %d\n",c); 
    printf("D = %u\n",d); 
    printf("E = %lld\n",e);

    return 0;
}