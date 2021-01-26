/*2.Пребройте редовете, подадени чрез текст на конзолата.
Използвайте функцията getchar();*/

#include <stdio.h>

int main(void){
    int c;
    int count=0;

    while((c = getchar()) != EOF){
        if(c == '\n'){
        ++count;
        }   
    }

    printf("\nThe number of new rows: %d",count);

    return 0;
}