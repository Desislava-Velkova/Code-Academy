/*16.Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.*/

#include <stdio.h>
void printPlayGround(char (*playground)[8]);
int choise_direction(char (*playground)[8],int number);
void move_pull(char (*playground)[8],int number,int direction);

int main(void){
    int number,i,j,flag_lost=0,flag_won = 0,choice = 0, flag = 0;
    int direction = 0;
    char playground[3][8] = {
        {'-','-','-','-','-','-','-','-'},
        {9, 10, 11, 12, 13, 14, 15, 16},
        {1, 2, 3, 4, 5, 6, 7, 8} };

    char playground_return[3][8] = {
        {'-','-','-','-','-','-','-','-'},
        {9, 10, 11, 12, 13, 14, 15, 16},
        {1, 2, 3, 4, 5, 6, 7, 8} };
        
    do{
        printPlayGround(playground);  /*prints the playground*/
        printf("\n******* MENU *********\n");

        do{ /*ask the user for action: to point a numb or undo */
            printf("1. Point a number\n");
            if(flag == 0){
                printf("2. Undo the last action\n");
                scanf("%d",&choice);
                if (choice == 1 || choice == 2){  /*if the choose is correct it will break while loop*/
                    break;
                } else {
                    printf("Incorrect option. Please choose option 1 or option 2.\n");
                }
            } else {   /*if the return option is already selected it will give option only for pointing a number*/
                scanf("%d",&choice);
                if (choice == 1){
                    break;
                } else {
                    printf("Incorrect option. Please choose option 1.\n");
                }
            }
        }while(1);

        if(choice == 1){  /*if we choose opiton 1 for poiting a num*/
            flag = 0;
            for(int i=0; i<3; i++){
                for(int j=0; j<8; j++){
                    playground_return[i][j] = playground[i][j];
                }
            }
            printf("Select number from the table:\n");
            scanf("%d",&number);
            direction = choise_direction(playground, number); /*selects direction of the pull*/

            if(direction){ 
                move_pull(playground, number, direction);  /*if direction is possible calls move func*/
            }
            for(i=0; i<3; i++){
                for(j=0; j<8; j++){
                    if(playground[i][j] == 1){    /*checks if 1 is in the game*/
                    flag_lost++;
                    }
                    if(playground[i][j] != '-'){
                    flag_won++;
                    }
                }
            }
            if (!flag_lost){
                printPlayGround(playground);  /* if 1 is not in the game the while loop will break and the game will finish*/
                printf("\n\n\t\t******* YOU REMOVED NUMBER 1 *********\n");
                printf("\n\n\t\t******* YOU LOST *********\n\n");
                break;
            }
            if(flag_won == 1){   /* if 1 is only one left in the game while loop will break and the game will finish*/
                printPlayGround(playground);
                printf("\n\n\t\t******* YOU WON *********\n\n");
                break;
            }
            flag_lost = 0;
            flag_won = 0;
        } else {    /*if we choose option 2 for undo*/
            flag = 1;
            for(int i=0; i<3; i++){
                for(int j=0; j<8; j++){
                    playground[i][j] = playground_return[i][j];
                }
            }
        }
    }while(1);
   
    return 0;
}
void printPlayGround(char (*playground)[8]){
    printf("\n\t\t******* Playground SOLITER *********\n");

    for(int i=0; i<3; i++){
        printf("\n");
            for(int j=0; j<8; j++){
                if(playground[i][j] == '-'){
                    printf("\t %c",playground[i][j]);
                } else {
                    printf("\t %d",playground[i][j]);
                }
            }
    }
    printf("\n\n");
}
int choise_direction(char (*playground)[8], int number){
    int num = 0, flag = 0;
    int i,j,pull_i,pull_j;
    int directions[4] = {0};

    for(i=0; i<3; i++){
        for(j=0; j<8; j++){
            if(playground[i][j] == number){
                pull_i = i;
                pull_j = j;
            }
        }
    }
    for(i=0; i<3; i++){   /*check which directions are available for the selected pull*/
        for(j=0; j<8; j++){
            if ((i == (pull_i-2)) && (j == pull_j) && (playground[i][j] == '-')){
                /*Move Up*/
                directions[0] = 1;
            }
            if ((i == pull_i) && (j == (pull_j - 2)) && (playground[i][j] == '-')){
                /*Move Left*/
                directions[1] = 2;
            }  
            if ((i == pull_i) && (j == (pull_j + 2)) && (playground[i][j] == '-')){
                /*Move Right*/
                directions[2] = 3;
            } 
            if ((i == (pull_i+2)) && (j == pull_j) && (playground[i][j] == '-')){
                /*Move Down*/
                directions[3] = 4;
            }                               
        }
    }

    for(i = 0; i < 4; i++){
        if (directions[i] > 0){
            flag = 1;
        }
    }
    if(!flag){
        printf("You can't move number - %d\n", number);
        return 0;
    }

    printf("\n******* MENU *********\n");
    printf("Enter what move you want to do:\n");

    for(i = 0; i < 4; i++){
        switch(directions[i]){
            case 1:
                printf("1. Move up.\n");
                break;
            case 2:
                printf("2. Move left.\n");
                break;
            case 3:
                printf("3. Move right.\n");
                break;
            case 4:
                printf("4. Move down.\n");
                break;
            default:
                break;
        }
    }
    printf("**********************\n");
    do{
        scanf("%d",&num);
        if (num == directions[0] || num == directions[1] || num == directions[2] || num == directions[3]){
            break;
        } else {
            printf("Incorrect direction! Please select different direction!\n");
        }

    }while(1);
    return num;
}   

void move_pull(char (*playground)[8],int number,int direction){
    int i,j,pull_i,pull_j;

    for(int i=0; i<3; i++){
        for(int j=0; j<8; j++){
            if(playground[i][j] == number){
                pull_i = i;
                pull_j = j;
            }
        }
    }
    switch(direction){
        case 1:    /*if direction is up*/
            playground[pull_i][pull_j] = '-';
            playground[--pull_i][pull_j] = '-';
            playground[--pull_i][pull_j] = number;
            break;
        case 2: /*if direction is left*/
            playground[pull_i][pull_j] = '-';
            playground[pull_i][--pull_j] = '-';
            playground[pull_i][--pull_j] = number;
            break;
        case 3: /*if direction is right*/
            playground[pull_i][pull_j] = '-';
            playground[pull_i][++pull_j] = '-';
            playground[pull_i][++pull_j] = number;
            break;
        case 4:  /*if direction is down*/
            playground[pull_i][pull_j] = '-';
            playground[++pull_i][pull_j] = '-';
            playground[++pull_i][pull_j] = number;
            break;
        default:
            break;
    }
}