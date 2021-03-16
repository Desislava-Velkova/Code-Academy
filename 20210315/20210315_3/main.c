#include "func.h"

int main(void){
    treeNode_t *temp = NULL;
    treeNode_t *firstTreeA = NULL;
    treeNode_t *secondTreeB = NULL;
    treeNode_t *tirthTreeC = NULL;
    treeNode_t *fourthTreeD = NULL;
    treeNode_t *fifthTreeE = NULL;

    int arrNodesA[] = {7, 14, 28, 35, 65, 12, 18, 42, 81, 64, 61, 4, 13};
    int arrNodesB[] = { 12, 7, 14, 81, 42, 18, 61, 4, 64, 35, 13, 28, 65};
    int arrNodesC[] = {4, 7, 12, 13, 14, 18, 28, 35, 42, 61, 64, 65, 81};
    int arrNodesD[] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};
    int arrNodesE[] = {28, 64, 13, 42, 7, 81, 61, 4, 12, 65, 35, 18, 14};
    int len = sizeof(arrNodesA)/sizeof(arrNodesA[0]);

    printf("Nodes of tree A:\n");
    printAndInsertNodes (firstTreeA, arrNodesA, len);

    printf("Nodes of tree B:\n");
    printAndInsertNodes (secondTreeB, arrNodesB, len);

    printf("Nodes of tree C:\n");
    printAndInsertNodes (tirthTreeC, arrNodesC, len);

    printf("Nodes of tree D:\n");
    printAndInsertNodes (fourthTreeD, arrNodesD, len);

    printf("Nodes of tree E:\n");
    printAndInsertNodes (fifthTreeE, arrNodesE, len);
    
    return 0;
}