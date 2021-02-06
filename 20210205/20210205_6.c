/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j*/

#include <stdio.h>
void input(char *s, char *t);
void our_strcat(char *s, char *t);

int main(void){
    char s[50];
    char t[25];
    
    input(s,t);
    our_strcat(s,t);
    printf("%s",s);

    return 0;
}
void input(char *s, char *t){
    char c, count = 0;

    printf("Insert information for the first char.\n");
    while((c = getchar()) != '\n'){
        *s++ = c;
        count++;
        if(count == 49){  /*prevent cell overwrite*/
            break;
        }
    }
    *s = '\0';

    printf("Insert information for the second char.\n");
    count = 0;
    while((c = getchar()) != '\n'){
        *t++ = c;
        count++;
        if(count == 24){ /*prevent cell overwrite*/
            break;
        }
    } 
    *s = '\0';
}
void our_strcat(char *s, char *t){
   while(*s){  
       s++; /*counting the numer of chars in first string and finding where it ends*/
   }
   while(*t){ 
       *s++ = *t++; /*puts chars from t string right next to last element in first string*/
   }
   *s = '\0';
}