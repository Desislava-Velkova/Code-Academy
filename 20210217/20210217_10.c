/*Задача 10.
Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3.*/

#include <stdio.h>
void ArrPrimeNaive(int *arr);
int input(void);
void checkNum(int *num, int *arr, int length);

int main(void){
    int arr[168];
    int length_arr = 168;

    void (*ptr_to_arrPrime)(int *) = &ArrPrimeNaive;
    ptr_to_arrPrime(arr);
    
    int (*ptr_to_inputFun)(void) = &input;
    int num = ptr_to_inputFun();
    
    void (*ptr_to_checkFun)(int *, int *, int) = &checkNum;
    ptr_to_checkFun(&num,arr,length_arr);
    return 0;
}
void ArrPrimeNaive(int *arr){
    int i,j,k = 0, flag = 0;

    for(i=2; i<1000; i++){
        for(j=2; j<1000; j++){
            if ((i != j) && (i % j == 0)){
                flag = 1;
                break;
            } else {
                flag = 0;
            }
        }
        if (flag == 0){
            arr[k] = i;
            k++;
        }
    }
}
int input(void){
    int num;
    do{
        printf("Enter number from 0 to 1000 which you want to check\n");
        scanf("%d",&num);
        if(num < 0 || num >1000){
            printf("\nYou need to enter number between 0 to 1000!\n\n");
        }
    } while(num < 0 || num >1000);

    return num;
}
void checkNum(int *num, int *arr, int length){
    int i, flag = 0;

    for(i=0; i<length; i++){
        if(*num == *(arr+i)){
            flag = 1;
            break;
        }
    }
    (flag) ? printf("%d is prime number.\n") : printf("%d is NOT prime number.\n");
}