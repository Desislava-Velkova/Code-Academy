/*Задача 13.
Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете.*/

#include <stdio.h>

int main(void){
    int count = 1, c;

    FILE *fp = NULL;
    fp = fopen("test.txt", "r"); /*opens file in writing mode*/

    while ((c=fgetc(fp)) != EOF){ 
        if(c == '\n'){
            count++;
        } 
    }

    printf("The number of rows in the file: %d\n",count);

    fclose(fp); 

    return 0;
}