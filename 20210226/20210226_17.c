/*17. Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct watermelon {
    int diameter;
    float peelThickness;
} t_watermelon;

void input(int *numWatermelonA, int *numWatermelonB){
    printf("How many watermelons of type melon there are?\n");
    scanf("%d", numWatermelonA);
    printf("How many watermelons of type pumpkin there are?\n");
    scanf("%d", numWatermelonB);
}
t_watermelon* allocMemory(int numWatermelonA){
    typedef t_watermelon *t_pWatermelon;

    t_pWatermelon ptr = (t_pWatermelon)malloc(sizeof(t_watermelon) * numWatermelonA);

    if (NULL == ptr){
        printf("Memory not allocated\n");
        exit(1);
    }
}
void calc(t_watermelon arr[], float *sumPeelThickness, int *sumDiameter, int numWatermelon){
    srand((unsigned int)(time(NULL)));

    for (int i = 0; i < numWatermelon; i++){
        arr[i].diameter = rand() % 126 + 15;
        *sumDiameter += arr[i].diameter;
        arr[i].peelThickness = rand() % 31 * 0.1 + 0.5;
        *sumPeelThickness += arr[i].peelThickness;
    }
}
float averageDiameter(int sumDiameter, int numWatermelon){
    return ((float)sumDiameter / numWatermelon);
}
float averagePeelThickness(float sumPeelThickness, int numWatermelon){
    return ((float)sumPeelThickness / numWatermelon);
}
int main(){
    int sumDiameterA = 0, sumDiameterB = 0;
    float sumPeelThicknessA = 0, sumPeelThicknessB = 0;
    int numWatermelonA, numWatermelonB;
    
    input(&numWatermelonA, &numWatermelonB);  /*fill inf from the user*/

    typedef t_watermelon *t_pWatermelon;  /*create our own type for pointer to struct*/

    t_pWatermelon pMelon = allocMemory(numWatermelonA);   /*allocate memory for melon*/
    
    t_pWatermelon pPumpkin = allocMemory(numWatermelonB); /*allocate memory for  pumkin*/

    

    calc(pMelon, &sumPeelThicknessA, &sumDiameterA, numWatermelonA); /*calc diameter and peelthickness*/

    calc(pPumpkin, &sumPeelThicknessB, &sumDiameterB, numWatermelonB);

    /*next few statement calculate average  values with functions*/
    float averageDiameterA = averageDiameter(sumDiameterA, numWatermelonA);
    float averageDiameterB = averageDiameter(sumDiameterB, numWatermelonB);
    float averagePeelThicknessA = averagePeelThickness(sumPeelThicknessA, numWatermelonA);
    float averagePeelThicknessB = averagePeelThickness(sumPeelThicknessA, numWatermelonA);
    float eatablePartA = sumDiameterA - sumPeelThicknessA;
    float eatablePartB = sumDiameterB - sumPeelThicknessB;

    if (eatablePartA > eatablePartB){
        printf("\nIt is better to buy %d watermelons type melon with diameter %.2f sm and peelthickness %.2f\n\
        sm instead of %d watermelons type pumpkin with diameter %.2f sm and peelthickness %.2f sm\n", 
        numWatermelonA, averageDiameterA, averagePeelThicknessA, numWatermelonB, averageDiameterB, averagePeelThicknessB);
    }
    else {
        printf("\nIt is better to buy %d watermelons type pumpkin with diameter %.2f sm and peelthickness %.2f\n\
        sm instead of %d watermelons type melon with diameter %.2f sm and peelthickness %.2f sm\n", 
        numWatermelonB, averageDiameterB, averagePeelThicknessB, numWatermelonA, averageDiameterA, averagePeelThicknessA);
    }

    /*free allocated memory*/
    free(pMelon);
    free(pPumpkin);

    return 0;
}
    