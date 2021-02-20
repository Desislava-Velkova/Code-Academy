/*Задача 7. Направете функция struct point makepoint(int x, int y), която
създава две точки*/

#include <stdio.h>
struct point{
    int x;
    int y;
};
void makepoint(struct point* points);
void printpoint(struct point* points);

int main(void){
    struct point points;

    makepoint(&points);

    printpoint(&points);

    return 0;
}
void makepoint(struct point* points){
    printf("Enter a value from the first point 'x'\n");
    scanf("%d",&points->x);
    
    printf("Enter a value from the second point 'y'\n");
    scanf("%d",&points->y);
}
void printpoint(struct point* points){
    int i, j;

    printf("\nThe values you've choose are %d for 'x' and %d for 'y'\n",points->x, points->y);
    printf("With these values the field will look like:\n\n");

    for(i=0; i<points->x; i++){
        for(j=0; j<points->y; j++){
            printf("-");
        }
        printf("\n");
    }
}