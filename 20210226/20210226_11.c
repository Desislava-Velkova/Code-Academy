/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.*/

#include <stdio.h>
#include <stdlib.h>

struct node_t{
    int num;
    struct node_t *ptr;
};
struct node_t* allocMemory(void);

int main(void){
    struct node_t *ptr = allocMemory();

    free(ptr);
    return 0;
}
struct node_t* allocMemory(void){
    struct node_t *ptr = NULL;
    ptr = (struct node_t*)malloc(sizeof(struct node_t));

    if(NULL == ptr){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n");
    }
    return ptr; 
}

