/*Задача 6. Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ...."; */

#include <stdio.h>
void input(char *s);
int numOfLEtter(char *s);

int main(void){
    char s[50];
    input(s); /*take text from the keyboard and put it in the string 's'*/
    
    int (*numFun_Ptr)(char *ptr) = NULL; /*pointer to function*/
    numFun_Ptr = numOfLEtter; /*directs the pointer to the function which count the number of letter 'a'*/
    printf("The number of letter \'a\' in the string is: %d",(*numFun_Ptr)(s));

    return 0;
}
void input(char *s){
    char c;
    int count = 0;

    printf("Enter some text to check how many 'a' letters it have\n");

    while ((c=getchar()) != '\n'){
        *s = c;
        *s++;
        count++;
        if(count == 49){
            printf("You've reached the max length of the string.\n");
            break;
        }
    }
    *s = '\0';
}
int numOfLEtter(char *s){
    int count = 0;
    while(*s){
        if(*s == 'a'){
            count++;
        }
        *s++;
    }
    return count;
}