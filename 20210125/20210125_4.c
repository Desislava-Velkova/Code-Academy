/*4. Напишете програма, която копира входа си на изхода, като
замества всеки низ от една или повече шпации, с една
единствена шпация. */

#include <stdio.h>

int main(void){
    int c, count = 1;

     while((c = getchar()) != EOF){
        if(c==' ' || c == '\t'){
            if((count == 1 && c == ' ') || (count == 1 && c == '\t')){
                continue;
            }
            count = 1;
        }else {
            count = 0;
        }   
        putchar(c);
        if(c == '('){
            putchar(')');
        }
    }

    return 0;
}