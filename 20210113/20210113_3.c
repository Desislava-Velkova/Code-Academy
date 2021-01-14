// 3. Съберете signed char a = -10 с unsigned char z = 0 тип. 

#include <stdio.h>

int main(){
    unsigned char z= 0;
    printf("Z = %d\n",z);

    signed char a = -10;
    printf("A = %d\n",a);

    char res = z+a;
    printf("Sum of z+a = %d\n",res);
    
    return 0;
}
