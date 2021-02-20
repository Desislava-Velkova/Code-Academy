/*Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник*/

#include <stdio.h>
#include <stdlib.h>

struct employees{
    char firstName[20];
    char middleName[20];
    char surName[20];
    char position[20];
    int workExperience;
    float salary;
    struct employees* Manager;
};
void fillInfo(struct employees *emp, int numEmployees);
void printInfo(struct employees *emp, int numEmployees);
void ManagerInfo(struct employees *managers, int numEmployees);
void printManager(struct employees *managers, int numEmployees);
void assignManagers(struct employees *emp, struct employees *managers, int numEmployees, int numManagers);

int main(void){
    struct employees emp[10];
    struct employees manager[2];

    fillInfo(emp, 10); /*fills inf for the employees*/
    ManagerInfo(manager,2); /*fills inf for the managers*/
    assignManagers(emp,manager,10,2); /*choose manager for every employees*/

    printInfo(emp,10);  /*print the  inf for every employees*/


    return 0;
}
void fillInfo(struct employees *emp,int numEmployees){
    int i=0,count = 1;
    
    do{
        printf("\n\tEnter information about employee № %d:\n",count);

        printf("Enter first name.\n");
        scanf("%s",emp[i].firstName);
        
        printf("Enter midle name.\n");
        scanf("%s",emp[i].middleName);

        printf("Enter last name.\n");
        scanf("%s",emp[i].surName);

        printf("Enter in what position in the firm is the employee.\n");
        scanf("%s",emp[i].position);

        printf("Enter how many year of work experience the employee have.\n");
        scanf("%d",&emp[i].workExperience);

        printf("Enter the month salary.\n");
        scanf("%f",&emp[i].salary);

        i++;
        count++;
    } while(i<numEmployees);
}
void printInfo(struct employees *emp, int numEmployees){
    int i, count=1;

    for(i=0; i<numEmployees; i++,count++){
        printf("-----------------------------------------------\n");
        printf("\tInforation for employee № %d:\n\n",count);
        printf("\tFirst name: %s\n", emp[i].firstName);
        printf("\tMidle name: %s\n", emp[i].middleName);
        printf("\tSurname: %s\n", emp[i].surName);
        printf("\tPosition in the firm: %s\n", emp[i].position);
        printf("\tWork experience: %d years\n", emp[i].workExperience);
        printf("\tSalary: %.2f\n", emp[i].salary);
        printf("\tManager: %s %s %s\n", emp[i].Manager->firstName,emp[i].Manager->middleName, emp[i].Manager->surName);
        printf("-----------------------------------------------\n\n");
    }
}
void ManagerInfo(struct employees *manager, int numEmployees){
    int i=0,count = 1;

    do{
        printf("\n\tEnter information for the Manager №%d\n",count);
        
        printf("Enter first name.\n");
        scanf("%s",manager[i].firstName);
        
        printf("Enter midle name.\n");
        scanf("%s",manager[i].middleName);

        printf("Enter last name.\n");
        scanf("%s",manager[i].surName);

        sprintf(manager[i].position,"Manager");

        printf("Enter how many year of work experience the manager have.\n");
        scanf("%d",&manager[i].workExperience);

        printf("Enter the month salary.\n");
        scanf("%f",&manager[i].salary);

        i++;
        count++;
    } while(i<numEmployees);

}
void printManager(struct employees *managers, int numEmployees){
    int i,count = 1;

    for(i=0; i<numEmployees; i++,count++){
        printf("-----------------------------------------------\n");
        printf("\tInforation for manager № %d:\n\n",count);
        printf("\tFirst name: %s\n", managers[i].firstName);
        printf("\tMidle name: %s\n", managers[i].middleName);
        printf("\tSurname: %s\n", managers[i].surName);
        printf("\tPosition in the firm: %s\n", managers[i].position);
        printf("\tWork experience: %d years\n", managers[i].workExperience);
        printf("\tSalary: %.2f\n", managers[i].salary);
        printf("-----------------------------------------------\n\n");
    }
}
void assignManagers(struct employees *emp, struct employees *managers, int numEmployees, int numManagers){
    int i=0;
    int temp = 0;
    printManager(managers,2);
    for(; i < numEmployees; i++){
        printf("Select the number of the Manager for Employee: %s %s\n",emp[i].firstName,emp[i].surName);
        do{
            scanf("%d",&temp);
        }while(temp < 1 || temp > 2);
        emp[i].Manager = &managers[temp-1];
    }
}
