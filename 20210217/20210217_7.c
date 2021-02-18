/*Задача 7. Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */

#include <stdio.h>
void input(int *counts);
void find_Num_Of_Letter(int *counts, char *letter);

int main(void){
    int counts[256] = { 0 };
    char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPRQSTUVWYZ";/*lower and upper case of the letters in alphabet*/

    void (*ptr_inputFunc)(int *arr) = &input; /*pointer to input function*/
    (*ptr_inputFunc)(counts); /*call input func with the pointer*/
    
    void (*ptr_findFunc)(int *arr, char *alphabet) = &find_Num_Of_Letter;/*pointer to find_Num_Of_Letter function*/
    (*ptr_findFunc)(counts,letter);/*call find_Num_Of_Letter function with the pointer*/
    
    return 0;
}
void input(int *counts){
    int c = 0, num_input = 0;

    while ((c = getchar()) != '\n'){ /*the end of the file is the new line command, because i have issue with the EOF ending*/
        counts[c] += 1;
        num_input++;
        if(num_input == 255){
            printf("You've reached the max length of the string.\n");
            break;
        }
    }
}
void find_Num_Of_Letter(int *counts, char *letter){
    int i, c = 0;

    for (i = 0; *(letter+i); ++i){
        c = *(letter+i);
        if(counts[c]!=0){
            printf("Char %c appears %d times.\n", c, *(counts+c));
        }
    }
}