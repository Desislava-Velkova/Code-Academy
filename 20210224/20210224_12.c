/*Задача 12.
Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y; }
или
float float_max(float x, float y){
return x > y ? x : y; }
или
char char_max(char x, char y){
return x > y ? x : y; }  */

#include <stdio.h>
      
#define GENERIC_MAX(x,y) (x > y ?  x : y)

int main(void){
    int x = 3, y = 13;
    float x1 = 3.44, y1 = 3.56;
    char x2 = 'j', y2 = 'b';

    printf("INT: %d\n",GENERIC_MAX(x,y));
    printf("Float: %.2f\n",GENERIC_MAX(x1,y1));
    printf("Char: %c\n",GENERIC_MAX(x2,y2));

    return 0;
}