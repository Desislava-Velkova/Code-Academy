/*Задача 5. Да се напише рекурсивен вариант на
функцията за обхождане на двоично дърво.*/

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct node_t treeNode_t;

typedef struct node_t{
    int data;
    treeNode_t* left;
    treeNode_t* right;
}treeNode_t;

extern treeNode_t* root;

void insertKey(treeNode_t ** tree, int val);
treeNode_t *search_rec(treeNode_t *tree, int num);