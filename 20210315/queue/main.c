#include "func.h"

node_t *first = NULL;
node_t *last = NULL;

int main(void){
    int n = 1;

    while (n){
        printf("Enter a digit:\n");
        scanf("%d", &n);
        write(n);
    }

    while(read(&n)){
        printf("%d\t", n);
    }
        
    return 0;
}