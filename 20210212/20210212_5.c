/*зад.5 Разширяване на заделена памет с realloc*/

#include <stdio.h>
#include <stdlib.h>
void input(int *num);
int* allocMem(int num);
void fillArr(int *p, int num);
int* re_alloc(int *p, int num);

int main(void){
    int* p = NULL;
    int num;
    
    input(&num); /*ask for num of elements ot the array*/

    p = allocMem(num); /*allocate memory for num * 4 bytes*/
    
    fillArr(p,num); /*fills the array whit  serial numbers*/

    printf("\nEnter the new size of the array\n"); /*ask for num of elements for the realloc */
    scanf("%d",&num);
    p = re_alloc(p,num); /*re-allocate memory for num * 4 bytes*/

    fillArr(p,num); /*fills the array whit  serial numbers*/

    free(p); /*free allocated memory*/
    printf("Memory successfully freed.\n");
    return 0;
}
void input(int *num){
    printf("Enter how many elements to be the array\n");
    scanf("%d",num);
}
int* allocMem(int num){
    int *p = NULL;
    p = (int *)malloc(num * sizeof(int)); /*allocated memory num*4 bytes */
    
    if(NULL == p){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n");
    }
    return p; 
}
void fillArr(int *p, int num){
    int i;
    printf("\nThe elements in the array are:\n");

    for(i=0; i<num; i++){
        *(p+i) = i+1;
        printf("array[%d] = %d\n", i, *(p+i));
    }
}
int* re_alloc(int *p, int num){
    p = realloc(p, 2*sizeof(int));

    if(NULL == p){
        printf("Reallocation memory error!\n");
        exit(2);
    } else{
        printf("Memory is sucsesfully reallocated.\n");
    }
    return p;
}