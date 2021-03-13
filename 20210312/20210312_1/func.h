#pragma pack(1)
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t *next;
}node_t;

extern node_t *start;

void init(void);
void add(int num);
void printList(node_t *n);
node_t* dellElemReturnAfter(int *n, int k);