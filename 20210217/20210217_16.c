/*Задача 16.
Имаме 2 сортирани масиви А и В с по 88 елемента. 176
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
    така че С да съдържа елементите на А и В, но да е подреден и да не се
    налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./ */

#include <stdio.h>
#define LENGTH 88
void fillArr(int *a, int *b);
void newArr(int *a, int *b, int *c);

int main(void){
    int A[LENGTH];
    int B[LENGTH];
    int C[LENGTH*2];
    
    void(*ptr_fillFun)(int *, int *) = *fillArr;
    ptr_fillFun(A,B);
    
    void(*ptr_newFun)(int *, int *, int *) = *newArr;
    ptr_newFun(A, B, C);

    return 0;
}
void fillArr(int *a, int *b){
    int i;

    for(i=0; i<LENGTH; i++){
        *(a+i) = i+2;
        *(b+i) = i+4;
        printf("a[%d] = %d\t",i, a[i]);
        printf("b[%d] = %d\n",i, b[i]);
    }
}
void newArr(int *a, int *b, int *c){
   int i = 0, j = 0, k =0;
   int len_arr_c = 2*LENGTH;

  while(k < len_arr_c){
    if(a[j] < b[i]){
        c[k] = a[j];
        k++;
        j++;
    } else if (a[j] > b[i]){
        c[k] = b[i];
        k++;
        i++;
    } else if (a[j] == b[i]){
        c[k] = a[j];
        k++;
        j++;
        c[k] = b[i];
        k++;
        i++;
    }
  }
  for(k = 0; k < len_arr_c; k++){
    printf("c[%d] = %d\n",k, c[k]);
  }
}