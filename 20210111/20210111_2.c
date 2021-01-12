/*2) Създайте функция vzemiBitna. Функцията получава
параметър число и индекс. Тя връща стойността на бита
на съответния индекс.*/

#include <stdio.h>
int vzemiBitna(int num, int index);

int main (){
    printf("%d", vzemiBitna(6,1));
    return 0;
}
int vzemiBitna(int num, int index){
    int x = 1;
    num = num >> index;
    return x&num;

}