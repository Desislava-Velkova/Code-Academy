/*4) Създайте функция vdigniBitNa. Тя получава
следните параметри - число и индекс. Функцията трябва
да "вдига" бита на съответния индекс в числото (под
"вдига" ще разбираме да му присвои стойност 1).*/

#include <stdio.h>
int vdigniBitNa(int num, int index);

int main(){

    printf("%d",vdigniBitNa(5,0));
    return 0;
}
int vdigniBitNa(int num, int index){
    int x = 1;
    x = x << index; 
    return x|num; // при вече вдигнат бит XOR не е приложим, понеже бита ще стане 0. 
}
