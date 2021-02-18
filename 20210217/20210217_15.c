/*Задача 15.
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int choise(void);
void toto(int num_choise, int *numbers);

int main(void){
    static int numbers[6];
    int num_choise = choise();

    toto(num_choise,numbers);

    return 0;
}
int choise(void){
    int num_choise = 0;
    do{
        printf("Choose:\n  1 for (5/35)\n  2 for (6/42)\n  3 for (6/49)\n");
        scanf("%d",&num_choise);
    } while(num_choise<1 || num_choise >3);

    return num_choise;
}
void toto(int num_choise, int *numbers){
    int i,j,temp,flag;
    srand((unsigned int)(time(NULL)));
    
    printf("You've choose %d\n",num_choise);
    printf("The numbers are:\n\n");

    switch (num_choise){
        case 1:
            for(i=0; i<5; i++){   /*(5 от 35)*/
                while(1){
                    flag = 1;
                    temp = rand()% 35; /*takes random number*/
                    for(j=0; j<5; j++){
                        if(numbers[j] == temp){ /*checks if the random number same as previous ones*/
                            flag = 0;
                            break;
                        }
                    }
                    if (flag){
                        *(numbers+i) = temp; /*if number is different from the previous ones it will write to the next position in the arr*/
                        printf("%d\n",*(numbers+i));
                        break;
                    }
                }
            }
            break;
        case 2:
            for(i=0; i<6; i++){   /*(6 от 42) */
                while(1){
                    flag = 1;
                    temp = rand()% 42;
                    for(j=0; j<6; j++){
                        if(numbers[j] == temp){
                            flag = 0;
                            break;
                        }
                    }
                    if (flag){
                        *(numbers+i) = temp;
                        printf("%d\n",*(numbers+i));
                        break;
                    }
                }
            }
            break;
        case 3:
            for(i=0; i<6; i++){  /*(6 от 49)*/
                while(1){
                    flag = 1;
                    temp = rand()% 49;
                    for(j=0; j<6; j++){
                        if(numbers[j] == temp){
                            flag = 0;
                            break;
                        }
                    }
                    if (flag){
                        *(numbers+i) = temp;
                        printf("%d\n",*(numbers+i));
                        break;
                    }
                }
            }
            break;
    }
}