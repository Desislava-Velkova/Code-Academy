/*Задача 14. Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).*/

#include <stdio.h>
void input(int (*a)[2][2]);

int main(void){
    int arr[2][2][2];
    int i,j,k;
    
    input(arr); /*filling the array*/

     for(i=0; i<2; i++){ /*printing the array*/
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
            printf("a[%d][%d][%d] = %d\n",i,j,k,arr[i][j][k]);
            }
        }
    }

    return 0;
}
void input(int (*a)[2][2]){
    int i,j,k;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<2; k++){
               printf("Insert number for a[%d][%d][%d]\n",i,j,k);
               scanf("%d",& a[i][j][k]);
            }
        }
    }
}