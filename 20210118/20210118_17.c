/* 17* Направете генератор на случайни числа по следния
алгоритъм (xorshift):
int A = 1, акумулатор с начална стойност
При всяко вземане на число от генератора се прави следното:
(i) A ^= A << 13;
(ii) A ^= A >> 17;
(iii) A ^= A << 5;
При всяка итерация изведете числото на екрана.
(Направете вариация с акумулатор long long int)*/

#include <stdio.h>
int xorshift(long long A);

int main(){
    long long num[] = {1,4,6,8,10,12}; 
    int i;

    for(i=0; i<6; i++){
        printf("%lld\n",xorshift(num[i]));
    }

    return 0;
}
int xorshift(long long A){
    A ^= A << 13;
    A ^= A >> 17;
    A ^= A << 5;  
   
    return A;
}