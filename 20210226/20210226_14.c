/*Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma pack(1)

typedef struct{
    short int age;
    short int num;
    char *firstName;
    char *lastName;
}participants;

int input(void);
char* allocMemory(void);
participants* allocMemory_participent(int numParticipants);
void fillParticipants_Info(participants participant[], int num);
void printInfo(participants participant[], int numPart);

int main(){
    int num = input();
    int i;
    participants* participant = allocMemory_participent(num); /*allocate variables from type participants*/
 
    fillParticipants_Info(participant, num); /*fill info for participants fom the keyboard*/

    printInfo(participant, num); /*print inf for the participants*/

    for(i=0; i<num; i++){
        free(participant[i].firstName);
        free(participant[i].lastName);
    }
    free(participant);

    return 0;
}
int input(void){
    int num;

    printf("How many people will participate in the marathon ?\n");
    scanf("%d", &num);

    return num;
}
char* allocMemory(void){
    char *ptr = NULL;
    
    ptr = (char*)malloc(20*sizeof(char)); /*allocate char array of 20 bytes*/

    if(NULL == ptr){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } 

    return ptr;
}
participants* allocMemory_participent(int numParticipants){
    participants *ptr = NULL;

    ptr = (participants*)malloc(numParticipants*sizeof(participants)); /*allocate variable from participant type*/

    if(NULL == ptr){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    }

    return ptr;
}
void fillParticipants_Info(participants participant[], int num){
    int i;

    for(i=0; i<num; i++){
        printf("\n\n");

        printf("Enter participant[%d] first name.\n",i);
        participant[i].firstName = allocMemory();
        scanf("%s", participant[i].firstName);

        printf("Enter participant[%d] last name.\n",i);
        participant[i].lastName = allocMemory();
        scanf("%s", participant[i].lastName);
        
        printf("Enter participant[%d] number.\n",i);
        scanf("%hd", &participant[i].num);
        
        printf("Enter participant[%d] age.\n",i);
        scanf("%hd", &participant[i].age);
    }
}
void printInfo(participants participant[], int numPart){
    int i;

    for(i=0; i<numPart; i++){
        printf("\n---------------------------------\n");
        printf("\tFirst name: %s\n",participant[i].firstName);
        printf("\tLast name: %s\n",participant[i].lastName);
        printf("\tNumber: %hd\n",participant[i].num);
        printf("\tAge: %hd\n",participant[i].age);
        printf("---------------------------------\n");
    }
}