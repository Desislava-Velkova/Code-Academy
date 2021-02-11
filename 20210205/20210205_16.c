/*Задача 16. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове).*/

#include <stdio.h>
void average(int (*arr)[4]);

int main(void){
    int arr[2][4] = {
        {1,2,3,4},
        {5,6,7,8} };
    
    average(arr);

    return 0;
}
void average(int (*arr)[4]){
    int i,j;
    double row_count = 0.0, cols_count = 0.0, average_rows, average_cols;

    for(i=0; i<2; i++){ /*finds the sum of columns*/
        for(j=0; j<4; j++){
            cols_count += arr[i][j];
        }
    }
    
    for(j=0; j<4; j++){ /*finds the sum of rows*/
        for(i=0; i<2; i++){
            row_count += arr[i][j];
        }
    }
    
    average_rows = row_count / 4;
    average_cols = cols_count / 8;
    printf("The average value of the rows in the array is: %f",average_rows);
    printf("The average value of the columns  in the array is: %f",average_cols);
}