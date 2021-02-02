/*Упражнение 3.* Добавете проверка във функцията int atof(char*s) 
дали подаденият стринг няма показни позиции преди числото
и, ако има, ги премахнете. Проверете дали числото не е
отрицателно и, ако е така, включете знака в резултата.*/

#include <stdio.h>
double atof(char *s);

int main(void){
    char s[] = "-00103.6";
    printf("%lf", atof(s));

    return 0;
}
double atof(char *s){
    int i, flag = 0;
    double num, power = 0.0;
    
    if(s[0]== '-'){ /*cheking is it negative or positive number*/
        i = 1;
    }else {
        i = 0;
    }
    for(num=0; s[i] >= '0' && s[i] <= '9'; i++){ 
        if(s[i] == '0' && flag == 0){ 
            continue;
        }else {
            flag = 1;
        }
        num = 10 * num + (s[i] - '0');
    }
    if(s[i]== '.')
        i++;

    for(power=1.0; s[i] >= '0' && s[i] <= '9'; i++){ 
        num = 10.0 * num + (s[i] - '0');
        power *= 10;
    }
    if(s[0]== '-'){
        return -1 *(num/power);
    }else {
        return num/power;
    }
}