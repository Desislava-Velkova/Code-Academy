/*17.* Към задача 16 да се добави втора функция, която изчислява
лицето на елипса по зададени два параметъра ( Пи * A * B)*/

#include <stdio.h>
#define PI 3.14159
float area_circle(float R);
float area_elipse(float A, float B);

int main(){
    printf("Лицето на окръжноста със стойност R = 1 е: %f\n",area_circle(1));
    printf("Лицето на окръжноста със стойност R = 1.5 е: %f\n",area_circle(1.5));
    printf("Лицето на окръжноста със стойност R = 13 е: %f\n",area_circle(13));

    printf("Лицето на елипса със стойности A=8 и B=12 е: %f\n",area_elipse(8,12));
   

    return 0;
}
float area_circle(float R){
    float areaCircle = PI * R * R;

    return areaCircle;
}
float area_elipse(float A, float B){
    float areaElipse = PI * A * B;

    return areaElipse;
}