/*5) Създайте функция obarniBitNa. Тя получава
следните параметри - число и индекс. Като резултат
функцията обръща бита на съответната позиция в
числото (съответно от 0 на 1 или от 1 на 0)*/

#include <stdio.h>
int obarniBitNa(int num, int index);

int main(){
    printf("%d", obarniBitNa(35,1));
    return 0;
}
int obarniBitNa(int num, int index){
    int x = 1;
    x = x << index;
    return x^num;
}