/*Задача 7. Напишете програма на С, която съдържа 2 функции.
    1.Първата смята лице на правоъгълен триъгълник.
    2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под мейн функцията.*/

#include <stdio.h>

void input(float *a, float *b);
float areaTriange(float a,float b);
float areaSquare(float resTriange);

int main(void){
    float a,b,resTriange, resSquare;
    input(&a, &b);

    resTriange = areaTriange(a,b);
    printf("The area of the triangle is: %.2f\n",resTriange);

    resSquare = areaSquare(resTriange);
    printf("The area of the triangle is: %.2f\n",resSquare);

    return 0;
}
void input(float *a, float *b){
    printf("Insert value for a.\n");
    scanf("%f",a);
    printf("Insert value for b.\n");
    scanf("%f",b);
}
float areaTriange(float a,float b){
    return ((a*b)/2);
}
float areaSquare(float resTriange){
    return resTriange *2;
}