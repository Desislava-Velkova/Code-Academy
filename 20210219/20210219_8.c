/*Задача 8. Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/

#include <stdio.h>
struct point{
    int x;
    int y;
};
struct rect{
    struct point a;
    struct point b;
};
void makepoint(struct rect* screen);
void fillScreen(struct rect screen);

int main(void){
    struct rect screen;
    
    makepoint(&screen);

    fillScreen(screen);

    return 0;
}
void makepoint(struct rect* screen){
    screen->a.y = 0;
    screen->a.x = 0;
    screen->b.y = 15;
    screen->b.x = 15;

}
void fillScreen(struct rect screen){
    int i, j;

    for(i=screen.a.y; i <screen.b.y; i++){
        for(j=screen.a.x; j<screen.b.x; j++){
            printf("-");
        }
        printf("\n");
    }
}