/*Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */ 

/*
A) 33/4 = 8.25
B) 55/6 = 9.16
C) 88/12 = 7.33
D) 22/2 = 11
E) 99/14 = 7.07*/

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

/*creates names for the types of materials*/
typedef long int A;  
typedef short int B;
typedef char C;
typedef unsigned char D;
typedef int E;

typedef struct{  
    A long_wooden_board;
    B short_wooden_board;
    C small_bracket;
    D big_bracket;
    E screw;
}building_materials;

void fillStruct(building_materials* inStock, building_materials* shelf);
int calcTheMaterials(building_materials inStock, building_materials shelf);

int main(void){
    building_materials inStock, shelf;

    fillStruct(&inStock, &shelf);

    printf("From the materials in stock we can make %d wood shelfs.\n",calcTheMaterials(inStock,shelf));

    return 0;
}
void fillStruct(building_materials* inStock, building_materials* shelf){
/*initialize the members of inStock variabel with the values from the condition*/
    inStock->long_wooden_board = 33;
    inStock->short_wooden_board = 55;
    inStock->small_bracket = 88;
    inStock->big_bracket = 22;
    inStock->screw = 99;

/*initialize the members of shelf  variabel with the values from the condition */
    shelf->long_wooden_board = 4;
    shelf->short_wooden_board = 6;
    shelf->small_bracket = 12;
    shelf->big_bracket = 2;
    shelf->screw = 14;
}
int calcTheMaterials(building_materials inStock, building_materials shelf){
    int number_of_shelfs = 0, calc_var = 0;

    calc_var = (int)inStock.long_wooden_board / shelf.long_wooden_board;

    number_of_shelfs = (int)inStock.short_wooden_board / shelf.short_wooden_board;

    calc_var = (int)inStock.small_bracket / shelf.small_bracket;
    if(calc_var < number_of_shelfs){
        number_of_shelfs = calc_var;
    }

    calc_var = (int)inStock.big_bracket / shelf.big_bracket;
    if(calc_var < number_of_shelfs){
        number_of_shelfs = calc_var;
    }

    calc_var = (int)inStock.screw / shelf.screw;
    if(calc_var < number_of_shelfs){
        number_of_shelfs = calc_var;
    }

    return number_of_shelfs;
}
