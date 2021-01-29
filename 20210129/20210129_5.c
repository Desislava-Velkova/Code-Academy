/*Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/

#include <stdio.h>
void countOrNo(int num);
int input(void);

int main(void){
    int num = input();
  
    countOrNo(num);

    return 0;
}
int input(void){
    int num;
    do{
        printf("Enter the number you want to check\n");
        scanf("%d",&num);
    } while(num < 0);

    return num;
}
void countOrNo(int num){
    int res = num % 2;
    if(res == 0){
        printf("The number %d is even\n",num);
    }else {
        printf("The number %d is not even\n",num);
    }
}