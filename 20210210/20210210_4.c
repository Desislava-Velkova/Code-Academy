/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void generatePass(char *pass);
int chekChoise(char *pass);

int main(void){
    char pass[7];
    generatePass(pass);

    int chek=chekChoise(pass);
  
    while(chek){
        generatePass(pass);
        chek = chekChoise(pass);
    } 
    
    printf("Have a nice day!");

    return 0;
}
int chekChoise(char *pass){
    char ans;

    do{
        printf("The new password is: %s\n ",pass);
        printf("Do you want to keep this one (y/n)? \n");
        scanf("%c", &ans);
    }while(ans != 'y' && ans != 'n');
    
    return (ans == 'n') ? 1:  0;
}
void generatePass(char *pass){
    srand((unsigned int)(time(NULL)));
    int i;

    for (i = 0; i < 6; i++){
        *(pass+i) ='A' + (rand() % 6);
        *(pass+i) = 'a' + (rand() % 6);
    }
}