/*1.Пребройте символите, подавани на конзолата, с функцията
getchar(); */

#include <stdio.h>

int main(void){
    int c;
    c = getchar();
    int count=0;

    while(c != EOF){
        c = getchar();
        ++count;
    }

    printf("\nThe inserted simbols are: %d",count);

    return 0;
}