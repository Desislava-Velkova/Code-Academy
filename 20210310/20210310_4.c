/*Задача 4.
Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията.*/

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

typedef struct{
    float weight, size;
}clientPakcage;

int inputClientChoise(void);
void fillInfoPackage(clientPakcage* ptr, int num);
float checkPrice_by_Weight(clientPakcage* num);
float checkPrice_by_size(clientPakcage* num);
clientPakcage* allocMem(int num);
float calculateSeparatePrices(clientPakcage*ptr, int num);
float calculateTogetherPrices(clientPakcage*ptr, int num);
float* allocMemFloat(int num);

int main(void){
    float separateTotal = 0;
    float togetherTotal = 0;
    FILE *fp = NULL;  

    fp = fopen("FuncExit_Task4.txt", "w");/*opens file for writing the result from functions*/
    if(NULL ==  fp){
        perror("Error");/*pints the error*/
        exit(EXIT_FAILURE); /*Exit the program if the can't be open*/
    }

    int num = inputClientChoise(); /*takes number of packages from the user*/
    fprintf(fp, "inputClientChoise(void) return errno %d\n", errno); /*check for the exit code of the function*/
    
    clientPakcage *ptr_package = allocMem(num); /*allocates memory for clients packages*/
    fprintf(fp, "clientPakcage* allocMem(int num) return errno %d\n", errno);

    fillInfoPackage(ptr_package, num); /*fills the info for packages from the user*/
    fprintf(fp, "fillInfoPackage(ptr_package, num) return errno %d\n", errno);

    separateTotal = calculateSeparatePrices(ptr_package, num);
    fprintf(fp, "calculateSeparatePrices(ptr_package, num) return errno %d\n", errno);

    togetherTotal = calculateTogetherPrices(ptr_package, num);
    fprintf(fp, "calculateTogetherPrices(ptr_package, num) return errno %d\n", errno);

    printf("In this case, it is better to send them %s.\n", (separateTotal < togetherTotal) ? "separately" : "together" );

    free(ptr_package); /*free the allocated memory*/
    fprintf(fp, "free(ptr_package) return errno %d\n", errno);

    fclose(fp); /*close the file for writing*/

    return (EXIT_SUCCESS);
}
int inputClientChoise(void){
    int num = 0;

    printf("\n**************** Wellcome to post menu ****************\n");
    do{
        
        printf("Please enter for how many packages you want to check for price information.\n");
        scanf("%d",&num);

        if(num <= 0){
            printf("Invalid number! Please try agayn!\n");
        }
    }while(num <= 0);

    return num;
}
float checkPrice_by_Weight(clientPakcage* ptr){

    if(ptr->weight <= 20){
        return 0.46;
    }else if((ptr->weight >= 21) && (ptr->weight <= 50)){
    }else if((ptr->weight >= 51) && (ptr->weight <= 100)){
        return 1.02;
    }else if((ptr->weight >= 101) && (ptr->weight <= 200)){
        return 1.75;
    }else if((ptr->weight >= 201) && (ptr->weight <= 350)){
        return 2.13;
    }else if((ptr->weight >= 351) && (ptr->weight <= 500)){
        return 2.44;
    }else if((ptr->weight >= 501) && (ptr->weight <= 1000)){
        return 3.20;
    }else if((ptr->weight >= 1001) && (ptr->weight <= 2000)){
        return 4.27;
    }else{
        return 5.03;
    }
}
float checkPrice_by_size(clientPakcage* ptr){

    if(ptr->size <= 10){
        return 0.01;
    }else if((ptr->size> 10) && (ptr->size <= 50)){
        return 0.11;
    }else if((ptr->size > 50) && (ptr->size <= 100)){
        return 0.22;
    }else if((ptr->size > 100) && (ptr->size <= 150)){
        return 0.33;
    }else if((ptr->size > 150) && (ptr->size <= 250)){
        return 0.56;
    }else if((ptr->size > 250) && (ptr->size <= 400)){
        return 1.50;
    }else if((ptr->size > 400) && (ptr->size <= 500)){
        return 3.11;
    }else if((ptr->size > 500) && (ptr->size <= 600)){
        return 4.89;
    }else {
        return 5.79;
    }
}
clientPakcage* allocMem(int num){
    clientPakcage *ptr = NULL;
    ptr = (clientPakcage*)malloc(num * sizeof(clientPakcage));
    
    if(NULL == ptr){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } 

    return ptr; 
}
void fillInfoPackage(clientPakcage* ptr, int num){
    for(int i=0; i<num; i++){
        do {
            printf("\nEnter size (in cm) for package №%d\n",i+1);
            scanf("%f", &(ptr+i)->size);
        } while ((ptr+i)->size <= 0);
        do {
            printf("Enter weight (in grams) for package №%d\n",i+1);
            scanf("%f", &(ptr+i)->weight);
        } while ((ptr+i)->weight > 3000 || (ptr+i)->weight <= 0);
    }
}
float calculateSeparatePrices(clientPakcage*ptr, int num){
    int i;
    float *price_size_ptr = allocMemFloat(num);
    float *price_weight_ptr = allocMemFloat(num);

    float total_price_separate = 0;

    for(i=0; i<num; i++, ptr++){
        *(price_size_ptr + i) = checkPrice_by_size(ptr);
        *(price_weight_ptr+i) = checkPrice_by_Weight(ptr);

        printf("For package №%d: weight price is = %.2f\t size price is = %.2f\n",i, *(price_weight_ptr+i), *(price_size_ptr+i));
        
        total_price_separate += *(price_size_ptr + i) + *(price_weight_ptr+i);
    }
    printf("Total price of separate packages: %.2f\n", total_price_separate);

    free(price_size_ptr);
    free(price_weight_ptr);

    return  total_price_separate;
}

float calculateTogetherPrices(clientPakcage*ptr, int num) {
    float price_size, price_weight, total_price_together = 0;
    clientPakcage packagesTogether = { 0.0, 0.0 };

    for(int i=0; i<num; i++, ptr++){
        packagesTogether.size += ptr->size;
        packagesTogether.weight += ptr->weight;
    }
    price_size = checkPrice_by_size(&packagesTogether);
    price_weight = checkPrice_by_Weight(&packagesTogether);
    printf("If combined, the weight price is = %.2f and the size price is = %.2f\n", price_weight, price_size);

    total_price_together = price_size + price_weight;
    printf("Total price of the packages sent as one: %.2f\n", total_price_together);

    return total_price_together;
}

float* allocMemFloat(int num){
    float *ptr = NULL;
    ptr = (float *)malloc(num * sizeof(float)); /*allocated memory num*4 bytes */
    
    if(NULL == ptr){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } 

    return ptr; 
}