/*Задача 11.
Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери.*/

#include <stdio.h>

int main(void){
    int a = 10, b = 5, res_int = 0, res_char = 0;
    char c = 4;

    char *cPtr = &c;
    int *aPtr = &a;
    int *bPtr = &b;

    res_int = (*aPtr) * (*bPtr);
    printf("The res of (*aPtr) * (*bPtr) is: %d\n",res_int);
    
    res_char = (*cPtr) * (*aPtr); /*the compiler will typecast char into int type and then will do the multiplication */
    printf("The res of (*cPtr) * (*aPtr) is: %d\n",res_char);

    return 0;
}