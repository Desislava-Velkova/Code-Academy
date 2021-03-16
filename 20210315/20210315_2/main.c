#include "func.h"

treeNode_t *root = NULL;
treeNode_t *temp = NULL;

int main(void){    
    /* Inserting nodes into tree */
    insertKey(&root, 9);
    insertKey(&root, 18);
    insertKey(&root, 15);
    insertKey(&root, 6);

    /* Printing nodes of tree */
    printf("The elements of the tree are:\n");
    printPreorder(root);

    /* Deleting all nodes of tree */
    deltree(root);

    return 0;
}
