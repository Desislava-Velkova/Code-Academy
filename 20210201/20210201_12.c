/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/

#include <stdio.h>
#include <string.h>
int any(char s1[], char s2[]);

int main(void){
    char s1[] = "345";
    char s2[] = "000";
    int res = any(s1,s2);
    
    if(res != -1){
      printf("First matching character: %d position in s1\n", res);
    }else {
        printf("There is no match.");
    }
   
    return 0;
}
int any(char s1[], char s2[]){
    int i, j, res = 0;

    for(i=0; i<strlen(s1); i++){
        for(j=0; j<strlen(s2); j++){
            if(s1[i] == s2[j]){
                return i;
            }
        }
    }
    return -1;
}