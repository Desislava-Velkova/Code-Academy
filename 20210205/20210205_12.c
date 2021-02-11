/*Задача 12. Дефинирайте и инициализирайте едномерен масив с 5
елемента. Следкато сте готови, направете въвеждане на данните в масива,
като четете от потребителя със scanf.*/

#include <stdio.h>
void input(int *a);

int main(void){
    int arr[5];
    int i;
    
    input(arr); /*filling the array*/

    for(i=0; i<5; i++){ /*printng the array*/
        printf("arr[%d] = %d\n",i,arr[i]);
    }

    return 0;
}
void input(int *a){
    int i;

    for(i=0; i<5; i++){
        printf("Insert number for %d element\n",i);
        scanf("%d",&*(a+i));
    }
}