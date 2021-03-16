/*Задача 3. Да се построи наредено двоично дърво за
търсене чрез последователно добавяне на следните
върхове:
а) 7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13
б) 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65
в) 4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81
г) 81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4
д) 28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14
Да се сравнят получените дървета. Какви изводи могат
да се направят?*/

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct treeNode_t treeNode_t;

typedef struct treeNode_t {
    int data;
    treeNode_t *left;
    treeNode_t *right;
}treeNode_t;

void insertKey(treeNode_t ** tree, int val);
void printPreorder(treeNode_t * tree);
void printAndInsertNodes (treeNode_t* tree, int *arr, int len);
