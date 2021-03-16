/*Задача 6.
Given the struct BSTNode which represents a node in a binary search
tree, write a function BSTMerge() that will merge the contents of two search
trees into one.
The function does not need to preserve the contents of the input trees.*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node BSTNode_t;

typedef struct node{
    int data;
    BSTNode_t *left;
    BSTNode_t *right;
}BSTNode_t;

void insertKey(BSTNode_t ** tree, int val);


int main(void){
    BSTNode_t *root = NULL;
    BSTNode_t *temp = NULL;

    insertKey(&root, 5);


    return 0;
}

void insertKey(BSTNode_t ** tree, int val){
    BSTNode_t *temp = NULL;

    /*Check first if tree is empty, then insert node as root.*/
    if(!(*tree)){ 
        temp = (BSTNode_t*)malloc(sizeof(BSTNode_t));
        temp->left = NULL;
        temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data){   /*Checks if node value to be inserted is lesser than root node value*/
        insertKey(&(*tree)->left, val); /*Calls insertKey function recursively while there is non-NULL left node*/
    }else if (val > (*tree)->data){  /*Checks if node value to be inserted is greater than root node value*/
        insertKey(&(*tree)->right, val); /*calls insertKey function recursively while there is non-NULL right node*/
    }
}

int[] getAllElements(BSTNode_t root1,BSTNode_t root2) {
    int[] arr1
    int[] arr2
    inorder(root1, arr1)
    inorder(root2, arr2)
    int[] result
    for(i =0 to i < arr1.size()) {
        result.push_back(arr1[i])
    }
    for(i =0 to i < arr2.size()) {
        result.push_back(arr2[i])
    }
    result.sort()
    return result
}
// inorder traversal
void inorder(BSTNode_t root, int[] arr) {
    if(root) {
        inorder(root.left)
        arr.push_back(root.val)
        inorder(root.right)
    }
}