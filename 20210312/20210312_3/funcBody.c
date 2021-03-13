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
void printList(node_t *ptr){
    printf("\n------------ LIST ------------\n");
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n------------------------------\n");
}
void printElement(int searchPosition, int *arrPosition){
    node_t *tempPtr = start;

    while(*arrPosition != searchPosition){
        tempPtr = tempPtr->next;
        *arrPosition++;
    }

    printf("\nIn position %d on the linked list is element with value %d", *arrPosition,tempPtr->data);
}