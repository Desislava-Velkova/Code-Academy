/*Задача 10.  Напишете функциите като макроси:
    1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
    2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
    3. Напишете функцията повдигане на степен, която повдига х на степен у
    4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
    5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0))*/

#include <stdio.h>
#include <math.h>

#define AVG(x,y) (x+y) / 2
#define AVG_FROM(x,y,average,count) for(;x<=y;x++){average = average + x; count++;}average = average / count;
#define POW(x,y,value,i) if(y>0){for(; i < y; i++) value *= x;}\
    else if(y==0){value = 1;} else if (y<0){for (i = 0; i < (-y); i++) value *= x; value = 1/value;}
#define TOUPPER(x)  x = x - 32;        
#define DISP(f, x) printf("The sqrt(%g) = %g\n", x, f(x));

int main(void){
    float average = 0, x = 10, y = 20, count = 0, value = 1, i = 0;
    char c = 'a';
    printf("The average value of %.2f and %.2f (using macros) is: %.2f\n", x, y, AVG(x,y));
    
    x = 1;
    y = 10;
    AVG_FROM(x,y,average,count);
    printf("The average value in the range of %.2f to %.2f (using macros) is: %.2f\n", x, y,average);
    
    x = 5;
    y = 1;
    POW(x,y,value,i);
    printf("Pown %.2f on %.2f = %.8f\n", x, y,value);

    TOUPPER(c);
    printf("%c\n", c);

    DISP(sqrt,3.0);

    return 0;
}