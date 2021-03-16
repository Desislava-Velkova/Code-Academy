/*Задача 1
Използвайте динамична реализация на стек за въвеждане на поредица
от цели положителни числа и нейното извеждане върху екрана в
обратен ред. За край на поредицата от клавиатурата се въвежда 0*/

#pragma pack(1)
#include <stdio.h>
#include <stdlib.h>

typedef struct node_t node_t;

typedef struct node_t{
    int data;
    node_t *next;
}node_t;

extern node_t *start;

int push(int n);
int pop(int *n);
