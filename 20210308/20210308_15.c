/*Задача 15.
Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/

#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp = NULL;
    fp = fopen("test1.txt", "r"); /*opens txt in read mode*/

    if(NULL == fp){
        perror("Error opening file!");
        return -1;
    }

    fseek(fp,0,SEEK_END); /*go to the end of the string*/

    int len = ftell(fp); /*find the current position*/

    char buf[100];
  
    while (len >= 0){ /*write the info from the file in buf char*/
        fseek(fp, len, SEEK_SET); 
        fgets(buf, sizeof(buf), fp);  
        len--; 
    } 

    len = strlen(buf);

    for(int i= len; i>=0; i--){ /*read info in opposite way*/
        printf("%c",buf[i]);
    }
    
    fclose(fp);
    return 0;
}