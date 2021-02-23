/*Задача 12.
Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. 
struct <tagStruct> {
    Ctype m_bitField : N;
    CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?*/

#include <stdio.h>

struct test{
    char member1; 
    char member2: 6; 
    short int member3; 
    short int member4;
    unsigned int member5: 3;    
};

int main(void){
    struct test var;

    var.member4 = 7;
    printf("The value of member1 is: %d\n",var.member4);

    /*var.member2 = 'c'; 
    printf("The value of member2 is: %c\n",var.member2); 
    
    - that initialization will give us overflow because of the bit fields to member2.
    Member2 can only stor values with 6 significant bits and the value of 'c' is 110 0011 which is 7 significant bits*/

    printf("The size of the structure is: %d\n",sizeof(var));

    /*Before adding the new members in the struct, the size of the struct was 4 bits. With adding the new members it became
    12 bits. 
    With data alignment of the struct we can reduce the padding to minimum */
    
    
    return 0;
}