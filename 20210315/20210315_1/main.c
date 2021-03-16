#include "func.h"

node_t *start= NULL;

int main(void){    
    int n = 1;

    while (n){
        printf("Enter a digit:\n");
        scanf("%d", &n);
        push(n);
    }

    printf("Stack pop:\n");
    while(pop(&n)){
        printf("%d\t", n);
    }
        
    return 0;
}