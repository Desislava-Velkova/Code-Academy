/*14. Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main()
принтирайте стойността на глобалната променлива.*/

#include <stdio.h>
int g_a = 0;

void test();

int main(){
    test();
    test();
    test();

    return 0;
}
void test(){
    g_a++;
    printf("a = %d\n",g_a);
}