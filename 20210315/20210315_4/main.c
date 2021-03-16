#include "func.h"

int main(void){
    treeNode_t* root = NULL;
    int nodesTreeArr[] = {6, 5, 10, 3, 8, 13, 1, 7, 11, 14, 12};
    int len = sizeof(nodesTreeArr)/sizeof(nodesTreeArr[0]);

    for(int i=0; i<len; i++){
        root = insert(root, nodesTreeArr[i]);
    }
 
    printf("Inorder traversal of the given tree \n");
    inorder(root);

    printf("\nDelete 1\n");
    root = deleteNode(root, 1);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    printf("\nDelete 7\n");
    root = deleteNode(root, 7);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    printf("\nDelete 12\n");
    root = deleteNode(root, 12);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    printf("\nDelete 14\n");
    root = deleteNode(root, 14);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);
 
    return 0;
}