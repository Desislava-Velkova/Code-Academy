/*Задача 13.
Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.
union <tagUnion> {
Ctype m_bitField : N;
};*/

#include <stdio.h>

union myUnion{
    unsigned short int member1: 6;
    char member2: 6;
};

int main(void){
    union myUnion var;
    
    var.member1 = 63;
    printf("The value of member1 is: %d\n", var.member1);

    var.member2 = 4;
    printf("The value of member2 is: %d\n", var.member2);

    return 0;
}