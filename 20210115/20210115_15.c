/*15. Използвайте статична локална променлива, за да постигнете
същото поведение, описано в задача 14.*/

#include <stdio.h>
void test();

int main(){
    test();
    test();
    test();

    return 0;
}
void test(){
    static int s_a =0;
    s_a ++;
    printf("a = %d\n",s_a);
}