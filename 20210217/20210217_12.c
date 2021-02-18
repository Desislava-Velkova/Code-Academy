/*Задача 12.
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void generatePass(char *pass);
int chekChoise(char *pass);

int main(void){
    static char pass[7];

    void (*ptr_genPass)(char *) = &generatePass; /*pointer to generatePass function*/
    ptr_genPass(pass); /*calls generatePass function with the pointer*/

    int (*ptr_choise)(char *) = &chekChoise; /*pointer to checkChoise function*/
    int chek = ptr_choise(pass); /*calls checkChoise function with the pointer*/
  
    while(chek){
        ptr_genPass(pass); /*calls generatePass function with the pointer*/
        chek = ptr_choise(pass); /*calls checkChoise function with the pointer*/
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
    int i = 0;

        *(pass+i) ='!' + (rand() % 14); /*on postionn 0 always will be symbol from ASCII */
        *(pass+1) = 'a' + (rand() % 25); /*on postionn 1 always will be lower letter from ASCII */
        *(pass+2) = 'A' + (rand() % 25); /*on postionn 2 always will be upper letter from ASCII */
        *(pass+3) = '0' + (rand() % 10); /*on postionn 3 always will be number from ASCII */
        *(pass+4) = '!' + (rand() % 14); /*on postionn 4 always will be symbol like in 0 position */
        *(pass+5) = 'A' + (rand() % 25); /*on postionn 5 always will be upper letter like in 2nd position */
        *(pass+6) = '\0';
}