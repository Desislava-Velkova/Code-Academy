/*Задача 5. а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/

#include <stdio.h>
struct point{
    int x;
    int y;
};

int main(void){
    int i,j;
    struct point field = {15,15};
    struct point a,b;
    a.x = 3;
    a.y = 4;
    b.x = 7;
    b.y = 10;

    for(i=0; i < field.y; i++){
        for(j=0; j < field.x; j++){
            if(a.y == i && a.x == j){ /*b)*/
                printf("@");
            }else if (b.y == i && b.x == j){ /*c)*/
                printf("@");
            }else if ((a.x <= j && b.x >= j) && (a.y <= i && b.y >= i)){ /*d)*/
                printf("@");
            }else {
                printf("-"); /*a)*/
            }
        }
        printf("\n");
    }

    return 0;
}
