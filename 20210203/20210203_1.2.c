/*задача 1.2. Принтирайте последния елемент от декларираните по-горе масиви:
Първия от тип char
Втория от тип int
Третия от тип double*/

#include <stdio.h>

int main(void){
    char a[3] = {'a','b','c'};
    int b[3] = {1,2,3};
    double c[3] = {1.2,3.4,5.6};
    
    printf("The last element of char array is: %c\n",a[2]);
    printf("The last element of int array is: %d\n",b[2]);
    printf("The last element of double array is: %lf\n",c[2]);
    
    return 0;
}