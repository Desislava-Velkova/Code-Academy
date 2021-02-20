/*Задача 6. Направете по подобен начин триъгълник:*/

#include <stdio.h>
struct point{
    int x;
    int y;
};
void printTriangle(struct point field);

int main(void){
    struct point field = {15,15};
    field.x = 10;
    field.y = 10;

    printTriangle(field);

    return 0;
}
void printTriangle(struct point field){
    int i, j;

    for(i=0; i < field.y; i++){
        for(j=0; j < i; j++){
            printf("*");
	    }
        for(int k=j; k < field.x; k++){
            printf("-");
	    }
        printf("\n");
    }

}