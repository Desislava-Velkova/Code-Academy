/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено */

#include <stdio.h>
void input(char *s, char *t);
int our_strcmp(char *s, char *t);
int strend(char *s, char *t);

int main(void){
    char s[50];
    char t[25];
    
    input(s,t);
    printf("%d",strend(s,t));

    return 0;
}
void input(char *s, char *t){
    char c;
    int count = 0;

    printf("Insert information for the first char.\n");
    while((c = getchar()) != '\n'){
        *s++ = c;
        count++;
        if(count == 48){  /*prevent cell overwrite*/
            printf("%d\n",count);
            break;
        }
    }
    *s = '\0';

    printf("Insert information for the second char.\n");
    count = 0;
    printf("%d\n",count);
    while((c = getchar()) != '\n'){
        *t++ = c;
        count++;
        if(count == 23){ /*prevent cell overwrite*/
            break;
        }
    } 
    *t = '\0';
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
int strend(char *s, char *t){
    int count_s = 0, count_t = 0, i,j;
    while(*s++){
        count_s++;
    }
    while(*t++){
        count_t++;
    }
   
     if (count_s < count_t){
        return 0;
     } else {
    return !our_strcmp(s,t);
    }
}