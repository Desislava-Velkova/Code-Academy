/*16. Да се дефинира константата Пи (3.14159...) и да се напише
функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
В main() да се извика горната функция с радиуси 1, 1.5, 13*/

#include <stdio.h>
#define PI 3.14159
float area_circle(float R);

int main(){
    printf("Лицето на окръжноста със стойност R = 1 е: %f\n",area_circle(1));
    printf("Лицето на окръжноста със стойност R = 1.5 е: %f\n",area_circle(1.5));
    printf("Лицето на окръжноста със стойност R = 13 е: %f\n",area_circle(13));

    return 0;
}
float area_circle(float R){
    float area = PI * R * R;

    return area;
}