/*Задача 13. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/

#include <stdio.h>
void input(int (*a)[5]);

int main(void){
    int arr[5][5];
    int i,j;
    
    input(arr); /*filling the array*/

     for(i=0; i<5; i++){ /*printing the array*/
        for(j=0; j<5; j++){
            printf("a[%d][%d] = %d\n",i,j,arr[i][j]);
        }
    }

    return 0;
}
void input(int (*a)[5]){
    int i,j;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Insert number for a[%d][%d]\n",i,j);
            scanf("%d",& a[i][j]);
        }
    }
}