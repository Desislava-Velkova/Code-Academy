/*Задача 4. Да се изтрият в този ред върховете 1, 7, 12 и
14 от дървото на*/

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct node treeNode_t;

typedef struct node {
    int key;
    treeNode_t *left, *right;
}treeNode_t;

treeNode_t* newNode(int item);

void inorder (treeNode_t* root);

treeNode_t* insert(treeNode_t* node, int key);

treeNode_t* minValueNode(treeNode_t* node);

treeNode_t* deleteNode(treeNode_t* root, int key);