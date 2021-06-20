/*Задача 1. Да напишем функция char *month_name(int n), която връща указател
към символен низ, съдържащ името на n-тия месец. Да декларираме въртешен static
масив от указатели, сочещ към стрингове съдържащи имената на месеците
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"
Декларирането на static масив в скоупа на функцията означава, че ще бъде
видимо името му в целия файл и ще продължи да живее и след излизане от скоупа на
функцията след края на програмата. Функцията връща указател към съответния месец,
отговарящ на параметъра n.
*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

char *month_name(int n);

int main(int argc, char* argv[]){
    char* message = NULL;
    int num = atoi(argv[1]);

    if (argc < 1 || argc > 2){
        exit (E2BIG);
    } else {
        message = month_name(num);
        printf("The month you choose is: \"%s\"", message);
    }

    return 0;
}

char *month_name(int n){
    static char *name[] ={
        "Illegal month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"};
        
    if(n > 12 || n<1){
        printf("The month you choose is: \"%s\"", name[0]);
        
        exit (EIO);
    } else{
        return name[n];
    }
}
