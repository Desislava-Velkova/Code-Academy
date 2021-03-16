#include "func.h"
treeNode_t* root = NULL;
treeNode_t* temp = NULL;

int main(void){
    int nodesTreeArr[] = {6, 5, 10, 3, 8, 13, 1, 7, 11, 14, 12};
    int len = sizeof(nodesTreeArr)/sizeof(nodesTreeArr[0]);

    for(int i=0; i<len; i++){
        insertKey(&root, nodesTreeArr[i]);
    }

    temp =search_rec(root, 14);
    
    printf("The node %d find from search_rec funcion.\n",temp->data);

    return 0;
}