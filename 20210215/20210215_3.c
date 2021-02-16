/*Задача 3. Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/

#include <stdio.h>
#define LENGTH 2

int main(void){
    int integer_arr[LENGTH] = {1, 2}; 
    float fl_arr[LENGTH] = {2.6, 4.8};
    char character_arr[LENGTH] = {'a', 'b'};

    int *ip = integer_arr;
    float *fp = fl_arr;
    char *cp = character_arr;

    for(int i=0; i<LENGTH; i++){
        printf("integer_arr[%d] = %d \t fl_arr[%d] = %.2f \t character_arr[%d] = %c\n", i, *ip++, i, *fp++, i, *cp++);
    }

    return 0; 
}