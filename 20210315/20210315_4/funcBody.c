#include "func.h"

treeNode_t* newNode(int item){
    treeNode_t* temp = (treeNode_t*)malloc(sizeof(treeNode_t));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder (treeNode_t* root){
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

treeNode_t* insert(treeNode_t* node, int key){
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
 
    /* return the (unchanged) node pointer */
    return node;
}

treeNode_t* minValueNode(treeNode_t* node){
    treeNode_t* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}

treeNode_t* deleteNode(treeNode_t* root, int key){
    if (root == NULL)
        return root;
 
    /* If the key to be deleted is smaller than the root's key, then it lies in left subtree*/
    if (key < root->key)
        root->left = deleteNode(root->left, key);
 
    /* If the key to be deleted is greater than the root's key, then it lies in right subtree*/
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
 
    /*if key is same as root's key, then This is the node to be deleted*/
    else {
        /*node with only one child or no child*/
        if (root->left == NULL) {
            treeNode_t* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            treeNode_t* temp = root->left;
            free(root);
            return temp;
        }
 
        /* node with two children */
        treeNode_t* temp = minValueNode(root->right);
 
        /* Copy the inorder successor's content to this node*/
        root->key = temp->key;
 
        /* Delete the inorder successor*/
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}