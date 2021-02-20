/*Задача 12. Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати. */

#include <stdio.h>
#include <math.h>

struct point{
    int x;
    int y;
};
struct Tpoint{
    struct point a;
};
void initFunc(struct Tpoint* X, struct Tpoint* Y);
int distFunc(struct Tpoint X, struct Tpoint Y);

int main(){
    struct Tpoint X;
    struct Tpoint Y;
    
    initFunc(&X, &Y);
    
    printf("The distance between X and Y is: %d",distFunc(X,Y));

    return 0;
}
void initFunc(struct Tpoint* X, struct Tpoint* Y){
    X->a.x = 1;
    X->a.y = 2;
    Y->a.x = 4;
    Y->a.y = 6;
}
int distFunc(struct Tpoint X, struct Tpoint Y){
    return (sqrt ( pow (X.a.x-Y.a.x,2) + pow (X.a.y-Y.a.y,2))); /*formula for distance of Pitagor*/
}