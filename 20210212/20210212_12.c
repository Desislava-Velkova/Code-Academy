/*Задача 12. Използвайки предишното упражнение, изведете участниците
подредени по азбучен ред*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int *num);
char* allocMemory(int num);
char** allocMemory_pointers(int num);
void fillArr(char **fname, char **lname, char **line, char **age, int num);
void print_participants(char **fname, char **lname, char **line, char **age, int num);
void sort_participants(char **fname, char **lname, char **line, char **age, int num);

int main(void){
    int num;
    char **fname_p, **lname_p;
    char **number_line_p, **age;

    input(&num);

    fname_p = allocMemory_pointers(num); 
    lname_p = allocMemory_pointers(num);
    number_line_p = allocMemory_pointers(num);
    age = allocMemory_pointers(num);

    fillArr(fname_p,lname_p,number_line_p,age,num);
    print_participants(fname_p,lname_p,number_line_p,age,num);
    sort_participants(fname_p,lname_p,number_line_p,age,num);  
    free(fname_p);
    free(lname_p);
    free(number_line_p);
    free(age);

    return 0;
}

void input(int *num){
    printf("Enter how many students will participate in the maraton.\n");
    scanf("%d",num);
}

char** allocMemory_pointers(int num){
    char **p = NULL;
    p = (char**)malloc(num * sizeof(char *)); 
    if(NULL == p){ /*check if it is allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    }
    return p; 
}

char* allocMemory(int num){
    char *p = NULL;
    p = (char*)calloc(num , sizeof(char)); 

    if(NULL == p){ /*check if it is allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    }
    return p; 
}

void fillArr(char **fname, char **lname, char **line, char **age, int num){
    int i,j;
    char c;
    
    for(i = 0; i < num; i++){
        fname[i] = allocMemory(20); /*Assuming that the first name is with max width 20*/
        lname[i] = allocMemory(20); /*Assuming that the last name is with max width 20*/
        line[i] = allocMemory(1);
        age[i] = allocMemory(1);
    }
    for(j = 0; j < num; j++){
        printf("\nName for participant[%d]:",j);
        i=0;
        fflush(stdin);
        while((c=getchar())!='\n'){
            fname[j][i] = c;
            i++;
        }
        fname[j][i] = '\0';

        printf("Last name for participant[%d]:",j);
        i=0;
        while((c=getchar())!='\n'){
            lname[j][i] = c;
            i++;
        }
        lname[j][i] = '\0';
        
        printf("Number in line for participant[%d]:",j);
        i=0;
        while((c=getchar())!='\n'){
            line[j][i] = c;
            i++;
        }
        line[j][i] = '\0';

        printf("Age for participant[%d]:",j);
        i=0;
        while((c=getchar())!='\n'){
            age[j][i] = c;
            i++;
        }
        age[j][i] = '\0';
    }
}

void print_participants(char **fname, char **lname, char **line, char **age, int num){
    int i;

    for(i = 0; i < num; i++){
        printf("\nName for participant[%d]: %s\n",i,fname[i]);
        printf("Last Name for participant[%d]: %s\n",i,lname[i]);
        printf("Number in line for participant[%d]: %s\n",i,line[i]);
        printf("Age for participant[%d]: %s\n",i,age[i]);
    }  
}
void sort_participants(char **fname, char **lname, char **line, char **age, int num){
    int i,j;
    char temp[20];

    for(i=0;i<num;i++){
       for(j=i+1;j<num;j++){
          if(strcmp(fname[i],fname[j])>0){
             /*Reorder the first name*/
             strcpy(temp,fname[i]);
             strcpy(fname[i],fname[j]);
             strcpy(fname[j],temp);
             /*Reorder the last name*/
             strcpy(temp,lname[i]);
             strcpy(lname[i],lname[j]);
             strcpy(lname[j],temp);
             /*Reorder the number in line */
             strcpy(temp,line[i]);
             strcpy(line[i],line[j]);
             strcpy(line[j],temp);
             /*Reorder the age */
             strcpy(temp,age[i]);
             strcpy(age[i],age[j]);
             strcpy(age[j],temp);
          } else if (strcmp(fname[i],fname[j]) == 0){
              if(strcmp(lname[i],lname[j])>0){
                    /*Reorder the first name*/
                    strcpy(temp,fname[i]);
                    strcpy(fname[i],fname[j]);
                    strcpy(fname[j],temp);
                    /*Reorder the last name*/
                    strcpy(temp,lname[i]);
                    strcpy(lname[i],lname[j]);
                    strcpy(lname[j],temp);
                    /*Reorder the number in line */
                    strcpy(temp,line[i]);
                    strcpy(line[i],line[j]);
                    strcpy(line[j],temp);
                    /*Reorder the age */
                    strcpy(temp,age[i]);
                    strcpy(age[i],age[j]);
                    strcpy(age[j],temp);
                }
            }
        }
    }
    for(i = 0; i < num; i++){
        printf("\nName for participant[%d]: %s\n",i,fname[i]);
        printf("Last Name for participant[%d]: %s\n",i,lname[i]);
        printf("Number in line for participant[%d]: %s\n",i,line[i]);
        printf("Age for participant[%d]: %s\n",i,age[i]);
    }  
}
