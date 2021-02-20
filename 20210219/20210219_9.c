/* Задача 9. Направете функця add(), която събира две точки.*/

#include <stdio.h>
struct point{
    int a;
    int b;
};
void input(struct point* points);
int add(struct point points);

int main(void){
    struct point points;

    input(&points);

    printf("The result of a + b = %d\n",add(points));

    return 0;
}
void input(struct point* points){
    printf("Enter value for the first point 'a'\n");
    scanf("%d",&points->a);

    printf("Enter value for the second point 'b'\n");
    scanf("%d",&points->b);
}
int add(struct point points){
    return (points.a + points.b);
}