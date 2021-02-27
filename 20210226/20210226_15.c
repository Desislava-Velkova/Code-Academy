/*Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред.*/

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
void sort_participants(participants participant[], int numParticipants);

int main(){
    int i;
    
    int num = input();
    
    participants* participant = allocMemory_participent(num); /*allocate variables from type participants*/
 
    fillParticipants_Info(participant, num); /*fill info for participants fom the keyboard*/

    sort_participants(participant, num);

    printInfo(participant, num); /*print inf for the participants*/

    for(i=0; i<num; i++){    /*clearr the allocated  memory*/
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
void sort_participants(participants participant[], int numParticipants){
    int i,j, tempNum;
    char temp[20];

    for(i=0; i<numParticipants; i++){
       for(j=i+1; j<numParticipants; j++){
          if(strcmp(participant[i].firstName,participant[j].lastName)>0){
             /*Reorder the first name*/
             strcpy(temp,participant[i].firstName);
             strcpy(participant[i].firstName,participant[j].firstName);
             strcpy(participant[j].firstName,temp);
             /*Reorder the last name*/
             strcpy(temp,participant[i].lastName);
             strcpy(participant[i].lastName,participant[j].lastName);
             strcpy(participant[j].lastName,temp);
             /*Reorder the number in line */
             tempNum = participant[i].num;
             participant[i].num = participant[j].num;
             participant[j].num = tempNum;
             /*Reorder the age */
             tempNum = participant[i].num;
             participant[i].num = participant[j].num;
             participant[j].num = tempNum;
              if(strcmp(participant[i].lastName,participant[j].lastName)>0){
                    /*Reorder the first name*/
                    strcpy(temp,participant[i].firstName);
                    strcpy(participant[i].firstName,participant[j].firstName);
                    strcpy(participant[j].firstName,temp);
                    /*Reorder the last name*/
                    strcpy(temp,participant[i].lastName);
                    strcpy(participant[i].lastName,participant[j].lastName);
                    strcpy(participant[j].lastName,temp);
                    /*Reorder the number in line */
                    tempNum = participant[i].num;
                    participant[i].num = participant[j].num;
                    participant[i].num = tempNum;
                    /*Reorder the age */
                    tempNum = participant[i].age;
                    participant[i].age = participant[j].age;
                    participant[j].age = tempNum;
                }
            }
        }
    }
}