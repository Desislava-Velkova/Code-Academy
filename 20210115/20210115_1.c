/*1. Дефиниция и декларация на променлива*/

#include <stdio.h>
extern int g_a; //global variable declaration

int main(){
    printf("Global variable = %d\n",g_a);
    return 0;
}
int g_a = 321; //global variable definition