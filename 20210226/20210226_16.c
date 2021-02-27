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
int choise(void);
void move(char (*playground)[8]);

int main(void){
    char playground[3][8] = {
        {'-','-','-','-','-','-','-','-'},
        {9, 10, 11, 12, 13, 14, 15, 16},
        {1, 2, 3, 4, 5, 6, 7, 8} };

    printPlayGround(playground);

    int num = choise();   
    return 0;
}
void printPlayGround(char (*playground)[8]){
    printf("\n\t\t******* Playground SOLITER *********\n");

    for(int i=0; i<3; i++){
        printf("\n");
            for(int j=0; j<8; j++){
                if(i==0){
                    printf("\t %c",playground[i][j]);
                } else if(i!=0){
                    printf("\t %d",playground[i][j]);
                }
            }
    }
    printf("\n\n");
}
int choise(void){
    int num = 0;
    
    do{
        printf("\n******* MENU *********\n");
        printf("Enter what move you want to do:\n");
        printf("1. Move up.\n");
        printf("2. Move left.\n");
        printf("3. Move right.\n");
        printf("**********************\n");
        scanf("%d",&num);
    } while(num < 1 || num > 3);

    return num;
}   
void move(char (*playground)[8]){
    int ch = choise();

    switch(ch){
        case 1:
            if()
            break;
        case 2:
            break;
        case 3:
            break;
    }
}