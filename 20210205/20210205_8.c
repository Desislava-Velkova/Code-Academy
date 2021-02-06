/*Задача 8. Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/

#include <stdio.h>
#include <string.h>
void reverse(char *str_old);
double atof(char *str);
void itoa(int *pNum, char *str2);
int atoi(char *str3);

int main(void){
    char str_old[] = "Hello!";
    reverse(str_old); /*1st function*/
    printf("\nThe result of reverese function is: %s",str_old);
    
    char str1[]= "123.6";
    printf("\nThe result of atof function is: %lf",atof(str1)); /*2nd function*/
 
    char str2[]= " ";
    int num = 456;
    int *pNum = &num;
    itoa(pNum,str2);
    printf("\nThe result of itoa function is: %s",str2); /*3th function*/
    
    char str3[] = "123";
    printf("\nThe result of atoi function is: %d",atoi(str3));
    
    return 0;
}
void reverse(char *str_old){
    int i,j,buff;

    for(i =0, j =(strlen(str_old)-1); i < j; i++, j--){
        buff = str_old[i];  
        str_old[i] = str_old[j];
        str_old[j] = buff;
    }
}
double atof(char *str){
    double num, power = 0.0;
    
    for(num=0; *str >= '0' && *str <= '9'; *str++){ 
        num = 10 * num + (*str - '0');
    }
    if(*str== '.')
        *str++;

    for(power=1.0; *str >= '0' && *str <= '9'; *str++){ 
        num = 10.0 * num + (*str - '0');
        power *= 10;
    }
    return num/power;
}
void itoa(int *pNum, char *str2){
     int i = 0;

     do {    
        *str2 = *pNum % 10 + '0';   
        *str2++;
     }while ((*pNum /= 10) > 0);     
     
     *str2 = '\0';
}
int atoi(char *str3){
    int n =0;

    for(; *str3 >= '0' && *str3 <= '9'; *str3++)
        n = 10 * n + (*str3- '0');

    return n;
}
