/*Задача 16.
Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 20

enum number{
    num,
};
struct Student{
    int age;
    char name[10];
    double average;
    int number;
};
void fillStruct(struct Student ptr[],char arr[]);

int main(void){
    struct Student arr[20];
    char file[1000];
    int c;
    int i = 0;
    const char *remove_any_of = "\n\r";

    while((c=getchar()) != EOF){
        if(!strchr(remove_any_of,c)){
            file[i]=c;
        } else {
            file[i]='|';
        }
        i++;
    }
    file[i] = '\0';

    fillStruct(arr,file);

    return 0;
}
void fillStruct(struct Student ptr[], char arr[]){
    char line[1000];
    const char delimiter[2] = ",";
    char* token; 
    int i = 0,j = 0, k=0;

    for(j=0; j < 20; j++){
        i = 0;
        fflush(stdin);
        while(arr[k] != '|'){
            line[i]=arr[k];
            k++;
            i++;
        }
        k++;
        i = 0;
        token = strtok(line, delimiter);  /* breaks string line into a series of tokens using the delimiter ",".*/
        while(token != NULL){   /*writes the inf from the file in the members of the struct*/
            if(i==0){
                ptr[j].age = atoi(token);
            }
            if(i==1){
                strcpy(ptr[j].name, token);
            }
            if(i==2){
                ptr[j].average = atof(token);
            }
            if(i == 3){
                ptr[j].number = atoi(token);
            }        
            token = strtok(NULL, delimiter);
            i++;
        }
        memset(line,'\0',1000);
    }
    for(i=0; i<LENGTH; i++){
        printf("%d,%s,%lf,%d\n", ptr[i].age, ptr[i].name, ptr[i].average, ptr[i].number);
    }
}
