/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/

#include <stdio.h>
#include <string.h>
void input(char *text);
void chekPalidrome(char *text);

int main(void){
    char text[50];
    
    input(text);

    chekPalidrome(text); 

    return 0;
}
void input(char *text){
    char c;
    int count = 0;
    printf("Enter some text.\n");

    while ((c=getchar())!= '\n'){
        *text=c;
        *text++;
        count++;
        
        if(count==49){
            printf("You reached the max size of the string\n");
            break;
        }
    }
    *text = '\0';
}
void chekPalidrome(char *text){
    int left = 0,count = 0; 
    int right = strlen(text) - 1; 
  
    while (right > left) 
    { 
        if (text[left++] != text[right--]) 
        { 
           count++;
           break;
        } 
    }
    (count) > 0 ?  printf("%s is not Palindrome\n", text):printf("%s is palindrome\n", text);
}