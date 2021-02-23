/*Задача 7. Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/

#include <stdio.h>
#include <string.h>

union test{
    int num;
    float fl_num;
    char str[20];
};

int main(void){
    union test var;

    var.num = 15;
    printf("The int member of the union is: %d\n",var.num);
    
    var.fl_num = 4.567;
    printf("The float member of the union is: %.3f\n",var.fl_num);

    strcpy(var.str, "This is a test.");
    printf("The string member of the union is: %s\n",var.str);

    return 0;
}