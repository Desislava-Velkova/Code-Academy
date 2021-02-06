/*Задача 5. Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с malloc.*/

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
   int i = 0, j = 0;

   while(s[i]!= '\0'){  /*counting the numer of chars in first string and finding where it ends*/
       i++;
   }
   while(s[i] = t[j]){ /*puts chars from t string right next to last element in first string*/
       i++;
       j++;
   }
}