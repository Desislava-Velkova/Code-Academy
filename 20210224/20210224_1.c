/*1. Дефинирайте константи PI, Е, и други с помощта на макроси. 
Използвайте ги в кода.*/

#include <stdio.h>
#define PI 3.14
#define E 2.718281
#define text printf("Hello word")
int input(void);
float circleDiameter(float radius); 

int main(void){
    float num = input(); /*ask for num to work with*/

    float resDiameter = circleDiameter(num); /*returns the res of circle diameter using macros define PI in the function*/

    printf("The diameter of the circle is: %f\n", resDiameter);
     
    printf("The E number is: %f\n", E); /*print the E number*/
    
    text; /*using macros #define text to print text*/

    return 0;
}
int input(void){
    int num;

    printf("Enter the radius of the circle.\n");
    scanf("%f",&num);

    return num;
}
float circleDiameter(float radius){
    return (2*PI*radius);
}