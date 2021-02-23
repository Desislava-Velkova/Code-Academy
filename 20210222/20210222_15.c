/*Задача 15. Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/

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
void fillStruct(struct Student ptr[], char (*names)[10]);

int main(void){
    struct Student arr[20];
    char names [][10] = {
        "Sally", "David", "Carl", "Karoline", "Katherine", "Angel" 
    };
    
    fillStruct(arr,names);

    return 0;
}
void fillStruct(struct Student ptr[], char (*names)[10]){
    int i, rand_num;
    srand((unsigned int)(time(NULL)));
    FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
    fptr = fopen("C:\\Users\\stifa\\codeAcademy\\structs20.csv","w");
    if(fptr == NULL)
    {
        printf("Error!");   
        exit(1);             
    }
    for(i=0; i<LENGTH; i++){
        rand_num = (rand()%50)+18;
        ptr[i].age = rand_num; /*generate rand years from 18 to 68*/
        rand_num = (rand()%5);
        strcpy( ptr[i].name, names[rand_num]);
        ptr[i].average = ((rand()%8)+4)/2;
        ptr[i].number = i+1;

        printf("%d,%s,%lf,%d\n", ptr[i].age, ptr[i].name, ptr[i].average, ptr[i].number);
        fprintf(fptr,"%d,%s,%lf,%d\n", ptr[i].age, ptr[i].name, ptr[i].average, ptr[i].number);
    }
    fclose(fptr);

}
