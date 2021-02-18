/*Задача 11. Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void generatePass(char *pass);
int chekChoise(char *pass);

int main(void){
    static char pass[7];
    generatePass(pass);
    int chek=chekChoise(pass);
  
    while(chek){
        generatePass(pass);
        chek = chekChoise(pass);
    } 
    
    printf("The password is saved. Have a nice day!");
    return 0;
}
int chekChoise(char *pass){
    char ans;
   
    do{
        fflush(stdin);
        printf("The new password is: %s\n ",pass);
        printf("Do you want to keep this one (y/n)? \n");
        scanf("%c", &ans);
    } while(ans != 'y' && ans != 'n');
    
    return (ans == 'n') ? 1:  0;
}
void generatePass(char *pass){
    srand((unsigned int)(time(NULL)));
    int i;

     for (i = 0; i < 6; i++){
        *(pass+i) = '!' + (rand() % 94);
    }
}