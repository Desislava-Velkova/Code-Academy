/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/

#include <stdio.h>
void input(int *pYear, int *pMonth, int *pDay);
int num_day(int year, int month,  int day);

const int c_arr[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31} }; /*leap year*/

int main(void){
    int year, month, day;
    int *pYear, *pMonth, *pDay;
    pYear = &year;
    pMonth = &month;
    pDay = &day;
    
    input(pYear, pMonth, pDay); 
    int res = num_day(year,month,day); 

    if(res != -1){
        printf("%d.%d.%d is %d",day,month,year,res);    
    } else {
        printf("There is no such day %d in %d.%d",day,month,year);   
    }

    return 0;
}
void input(int *pYear, int *pMonth, int *pDay){
    printf("Insert year\n");
    scanf("%d",pYear);

    do{ 
        printf("Insert month\n");
        scanf("%d",pMonth);
        
        if(*pMonth < 1 || *pMonth > 12){
            printf("You insert an incorrect month!\n Please try again!\n");
        }
    } while(*pMonth < 1 || *pMonth > 12);

    do{
        printf("Insert day\n");
        scanf("%d",pDay); 

        if(*pDay < 1 || *pDay > 31){
            printf("You insert an incorrect day!\n Please try again!\n");
        }
    } while(*pDay < 1 || *pDay > 31);
}
int num_day(int year,int month, int day){
    int i,j, count_day = 0;

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){ /*finds is it a leap year*/
        i = 1;
    } else {
        i = 0;
    }

    if(i){  /*if it's a leap year*/
        for(j=0; j<=month; j++){
            count_day+= c_arr[i][j];
        }
    } else{ /*if it's not a leap year*/
        for(j=0; j<=month; j++){
            count_day+= c_arr[i][j];
        } 
    }
    if(day > c_arr[i][month]){
        return -1;
    } else {
    /*count the day we choose - number of days in the month*/
        return count_day -= (c_arr[i][month] - day); 
    }   
}