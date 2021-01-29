/*Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/

#include <stdio.h>
void decToBin(int num);
int input(void);

int main(){
    int num = input();

    decToBin(num);

    return 0;
}
int input(void){
    int n;
    do{
        printf("Enter positive number which you want to convert in binary. \n");
        scanf("%u",&n);

        if(n <= 0){
        printf("You insert negative number!\n");
        }
    }while(n <= 0);
}
void decToBin(int num){
    int binaryNum[32];
    int i,j;

    for(i=0; num > 0; i++){ 
        binaryNum[i] = num % 2; 
        num = num / 2; 
    }
    for(j =i-1; j>=0; j--){
        printf("%d",binaryNum[j]);
    }
}
/*2ри вариант за фунцкия, която обръща в бинарно число е с използване на рекурсия.
Рекурсията ще принуди програмата да се изпълни по-бавно, отколкото ако използваме цикли. Но е добър вариант за по-големи числа*/

/*void decToBin(unsigned long int num){
    if (num >> 1) {
        decToBin(num >> 1);
    }
    (num & 1) ? printf("1") : printf("0");
}
*/