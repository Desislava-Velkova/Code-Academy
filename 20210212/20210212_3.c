/*Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/

#include <stdio.h>
#include <stdlib.h>
void input(int *num);
int* allocMem( int num);
int* fillArr(int *ip, int num);

int main(void){
    int *ip = NULL;
    int num;

    input(&num);

    ip = allocMem(num);
    printf("Addresses of the allocated memory is: %p\n", ip);

    ip = fillArr(ip,num);
    printf("Addresses of the re-allocated memory is: %p\n", ip);

    free(ip);

    return 0;
}
void input(int *num){
    printf("Enter how many elements to be the array\n");
    scanf("%d",num);
}
int* allocMem(int num){
    int *ip = NULL;
    ip = (int *)malloc(num * sizeof(int)); /*allocated memory num*4 bytes */
    
    if(NULL == ip){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n");
    }
    return ip; 
}
int* fillArr(int *ip, int num){
    int i;

    for(i=0; i<num; i++){
        *(ip+i) = i+3; /*fills the elements in the array*/
        printf("arr[%d] = %d\n",i,*(ip+i));

        if((i+1) == num){
            ip = realloc(ip, 2 * sizeof(int)); /*re-allocated memory when the leght of the array is reached*/
            printf("\nYou reached the max length of the array\n"); 
            printf("Memory successfully re-allocated.\n");
        }
    }
    return ip;
}
