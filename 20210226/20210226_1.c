/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте. */

#include <stdio.h>

typedef struct {
    char firstName[10];
    char lastName[10];
    short int age;
    short int number;
}t_student;
void inputInfo(t_student* Student1);
void printInfo(t_student Student1);

int main(void){
    t_student Student1;
    
    inputInfo(&Student1);

    printInfo(Student1);

    return 0;
}
void inputInfo(t_student* Student1){
    printf("Enter first name of the student.\n");
    scanf("%s", Student1->firstName);

    printf("Enter last name of the student.\n");
    scanf("%s", Student1->lastName);

    printf("Enter age.\n");
    scanf("%d", &Student1->age);

    printf("Enter № of the student.\n");
    scanf("%d", &Student1->number);
}
void printInfo(t_student Student1){
    printf("\n-------------------------------------\n");
    printf("\tStudent №%d\n",Student1.number);
    printf("\tFirst name: %s\n",Student1.firstName);
    printf("\tLast name: %s\n",Student1.lastName);
    printf("\tAge: %d\n",Student1.age);
    printf("---------------------------------------\n");
}