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
    enum number number;
};
void fillStruct(struct Student ptr[]);

int main(void){
    struct Student arr[20];

    fillStruct(arr);

    return 0;
}
void fillStruct(struct Student ptr[]){
    char line[1000];
    const char delimiter[2] = ",";
    char* token; 
    int i = 0,j = 0;

    /*open the existing .csv file, "r" stands for ""Opens an existing text file for reading purpose".*/
    FILE *fptr = fopen("C:\\Users\\stifa\\codeAcademy\\structs20.csv","r"); 

    if(fptr == NULL){
        printf("Error!");   
        exit(1);             
    }

    while (fgets(line, sizeof(line), fptr) != NULL) {   /*reads a character from the input file referenced by ftpr*/
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
        j++;
    }
    for(i=0; i<LENGTH; i++){
        printf("%d,%s,%lf,%d\n", ptr[i].age, ptr[i].name, ptr[i].average, ptr[i].number);
    }
    fclose(fptr); /*close the file*/
}
