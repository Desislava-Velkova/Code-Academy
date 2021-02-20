#include "function.h"

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
