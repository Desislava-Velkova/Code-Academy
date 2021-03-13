#include "func.h"

void init(void){
    start = NULL;
}

void add(int num){
    node_t *p = start;
    start = (node_t*)malloc(sizeof(node_t));

    if(!start){
        printf("Allocate memory failed!");
        exit(EXIT_FAILURE);
    } else {
        start->data = num;
        start->next = p;
    }
}

void printList(node_t *n){ 
    while (n != NULL) { 
        printf(" %d ", n->data); 
        n = n->next; 
    } 
    printf("\n");
}
node_t* dellElemReturnAfter(int *n, int k){/*deletes element with value k and return the element before him */
    node_t *p = start; 
    node_t *q;
    while(p->data != k){
        if(p->next == NULL){
            return NULL;
        }else{
            q = p;
            p = p->next;
        }
    }
    *n = p->data;
    q->next = p->next;

    free(p);

    return q->next;
}