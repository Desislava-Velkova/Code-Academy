/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/

#include <stdio.h>
void input(char *s);
int findLength(char *s);

int main(void){
    char s[50];
    input(s);
    
    printf("The lenght of the string \"%s\" is: %d",s,findLength(s));

    return 0;
}
void input(char *s){
    char c;
    while((c=getchar())!='\n'){
        *s++ = c;
    }
    *s = '\0';
}
int findLength(char *s){
    int count = 0;

    while (*s++){
        count++;
    }
    
    return count;
}