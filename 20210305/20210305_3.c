/*Задача 3. С увеличаване на надморската височина температурата намалява с
около 0,5ºC на всеки 100м. Нека приемем, че атмосферното налягане е нормално.
Ако се знае температурата (ХºC) на хижа Вихрен (1950 метра над морското
равнище), да се изчисли каква е температурата на връх Вихрен (2918 метра над
морското равнище). Ако се знае температурата (УºC) на връх Вихрен, да се изчисли
каква е температурата на хижа Вихрен.
Изход 1:
Ако атмосферното налягане е нормално и температурата на хижа Вихрен (1950м
н.м.р.) е ... ºC , то температурата на връх Вихрен (2918м н.м.р.) е ... ºC.
Изход 2:
Ако атмосферното налягане е нормално и температурата на връх Вихрен (2918м
н.м.р.) е ... ºC , то температурата на хижа Вихрен (1950м н.м.р.) е ... ºC.*/

#include <stdio.h>
int input(float *choice);
float calcTempreture(float choice, int num);

int main(void){
    float choice = 0;

    int num = input(&choice);  

    if(num == 1){
        printf("If the atmospheric pressure is normal and the temperature of Vihren hut is %.2f\n\
        then the temperature of Vihren peak is %.2f ºC\n", choice,calcTempreture(choice, num));
    } else{
        printf("If the atmospheric pressure is normal and the temperature of Vihren peak is %.2f\n\
        then the temperature of Vihren hut is %.2f ºC\n", choice,calcTempreture(choice, num));
    }
   
    return 0;
}
int input(float *choice){ 
    int num = 0;

    /*asks the user for wich one he want to the tempreture */
    do{
        printf("\nEnter for wich one you want to chek the tempreture:\n");
        printf("\tPress 1 for peak Vihren\n");
        printf("\tPress 2 for hut Vihren\n");
        scanf("%d",&num);

        if(num < 1 || num > 2 ){
            printf("Invalid choice! Please try again.\n");
        }
    } while(num < 1 || num > 2 );

    /*asks the user about the temperature in the hut if he wants the temperature at the top and the opposite*/
    (num == 1) ? printf("Enter the tempreture in hut Vihren.\n") : printf("Enter the tempreture in peak Vihren.\n");
    scanf("%f",choice);

    return num;
}
float calcTempreture(float choice, int num){
    float tempreture = 0.0;

    switch(num){
        case 1: tempreture = choice-(((2918-1950)/100)*0,5);
            break;
        case 2: tempreture = choice+(((2918-1950)/100)*0,5);
            break;
    }

    return tempreture;
}