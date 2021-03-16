#include "func.h"

void insertKey(treeNode_t ** tree, int val){
    treeNode_t *temp = NULL;

    /*Check first if tree is empty, then insert node as root.*/
    if(!(*tree)){ 
        temp = (treeNode_t*)malloc(sizeof(treeNode_t));
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

void printPreorder(treeNode_t* tree){
    if (tree){
        printf("%d\n",tree->data);  /*display value of root node.*/
        printPreorder(tree->left); /*calls printPreorder function recursively while there is non-NULL left node*/
        printPreorder(tree->right); /*Calls printPreorder function recursively while there is non-NULL right node*/
    }
}

void deltree(treeNode_t* tree) {
    if (tree){
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}