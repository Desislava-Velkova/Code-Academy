/*Задача 14.
Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск*/

#include <stdio.h>
#include <string.h>
void input(char *a, char *b);
int check_anagram(char a[], char b[]);

int main(void){
    char firstText[50];
    char secondText[50];

    void(*ptr)(char *, char *) = &input;
    ptr(firstText,secondText);
    printf("\nFirst string = %s\n",firstText);
    printf("Second string = %s\n\n",secondText);

    (check_anagram(firstText,secondText))? printf("The strings are anagram."):printf("The strings are NOT anagram.");

    return 0;
}
void input(char *a, char *b){
    char c;
    int count;
    
    printf("Enter the first text you want to check.\n");
    while((c=getchar())!= '\n'){
        *a++ = c;
        count++;
        if(count == 49){
            printf("You've reached the max length of the string!\n");
            break;
        }
    }
    *a = '\0';
    
    count = 0;
    printf("Enter the second text you want to check.\n");
    while((c=getchar())!= '\n'){
        *b++ = c;
        count++;
        if(count == 49){
            printf("You've reached the max length of the string!\n");
            break;
        }
    }
    *b = '\0';
}
int check_anagram(char a[], char b[]){
    int i =0 , j = 0, len_a = 0, len_b =0;
    int count_a = 0, count_b = 0, flag = 0;
    

    len_a = strlen(a);
    len_b = strlen(b);


    for(i=0; i<len_a; i++){
        for(j=0; j<len_a; j++){
            if(a[i] == a[j]){
                count_a++;
            }
        }
        for(j=0; j<len_b; j++){
            if(a[i] == b[j]){
                count_b++;
            }
        }
        if(count_a != count_b){
            flag = 0;
            break;
        }
        count_a = 0;
        count_b = 0;
        flag = 1;
    }

    if(flag){
        return 1;
    } else{
        return 0;
    }
}