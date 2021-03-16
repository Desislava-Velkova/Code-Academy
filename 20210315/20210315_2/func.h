/*Задача 2
Напишете функцията за добавяне на елемент в дървото рекурсивно
с двоен пойнтер подаван като параметър:
void insertKey(int x, struct tree **T) */

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct treeNode_t treeNode_t;

typedef struct treeNode_t {
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

extern treeNode_t *root;
extern treeNode_t *temp;

void insertKey(treeNode_t ** tree, int val);
void printPreorder(treeNode_t * tree);
void deltree(treeNode_t* tree);