/*Задача 11. Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга*/

#include <stdio.h>
#include <string.h>
struct person{
    char firstName[15];
    char lastName[15];
    int age;
    struct person* ptr;
};
void fillStruct(struct person* object1, struct person* object2);
void printStruct(struct person object1, struct person object2);

int main(void){
    struct person object1, object2;
    
    fillStruct(&object1, &object2);
    
    object1.ptr = &object2; /*directs the ptr member of object 1 to object 2*/

    object2.ptr = &object1; /*directs the ptr member of object 2 to object 1*/
    
    printStruct(object1, object2);    
    
    return 0;
}
void fillStruct(struct person* object1, struct person* object2){
    strcpy(object1->firstName, "Ivan");
    strcpy(object1->lastName, "Ivanov");
    object1->age = 27;

    strcpy(object2->firstName, "Petar");
    strcpy(object2->lastName, "Petrov");
    object2->age = 25;
}
void printStruct(struct person object1, struct person object2){
    printf("\n-----------------------------------------\n");   /*prints inf for object 1 with ptr of object 2*/
    printf("This is the information about the first person.\n");
    printf("\tFirst name is: %s\n",object2.ptr->firstName);
    printf("\tLast name: %s\n",object2.ptr->lastName);
    printf("\tAge: %d\n",object2.ptr ->age);
    printf("-----------------------------------------\n");


    printf("\n-----------------------------------------\n");  /*prints inf for object 2 with ptr of object 1*/
    printf("This is the information about the second person.\n");
    printf("\tFirst name is: %s\n",object1.ptr->firstName);
    printf("\tLast name: %s\n",object1.ptr->lastName);
    printf("\tAge: %d\n",object1.ptr ->age);
    printf("-----------------------------------------\n");
}