/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0 */

#include <stdio.h>
void input(char *s, char *t);
int our_strcmp(char *s, char *t);

int main(void){
    char s[50];
    char t[50];
    
    input(s,t);
    printf("%d",our_strcmp(s,t));

    return 0;
}
void input(char *s, char *t){
    char c, count = 0;

    printf("Insert information for the first char.\n");
    while((c = getchar()) != '\n'){
        *s++ = c;
        count++;
        if(count == 49){ /*prevent cell overwrite*/
            break;
        }
    }
    *s = '\0';

    printf("Insert information for the second char.\n");
    count = 0;
    while((c = getchar()) != '\n'){
        *t++ = c;
        count++;
        if(count == 49){ /*prevent cell overwrite*/
            break;
        }
    } 
    *s = '\0';
}
int our_strcmp(char *s, char *t){
    int i = 0;
 
    while (s[i] == t[i]){
        if (s[i] == '\0' || t[i] == '\0'){
            break;
        }
        i++;
    }
   
    if (s[i] == '\0' && t[i] == '\0'){
        return 0;
    }else if((s[i] !='\0' && t[i] == '\0')){
        return 1;
    }else {
        return -1;
    }
}