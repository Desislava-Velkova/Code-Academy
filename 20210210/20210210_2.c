/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/

#include <stdio.h>
void input(char *s);
void printOpposite(char *pStr);

int main(void){
    char s[50];
    char *pStr = s;

    input(s);

    printOpposite(pStr);

    return 0;
}
void input(char *s){
    char c;
    int count = 0;
    printf("Enter some text.\n");

    while ((c=getchar())!= '\n'){
        *s=c;
        *s++;
        count++; /*count the num of element*/
        
        if(count==49){
            printf("You reached the max size of the string\n");
            break;
        }
    } 
}
void printOpposite(char *pStr){
    int count=0;
    while(*pStr){
        *pStr++; /*finds the last element in the string*/
        count++; /*finds the lenght of string*/
    }
    
    for(; count>=0; count--,*pStr--){
        printf("%c",*pStr); /*print in the opposite way */
    }  
}