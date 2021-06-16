/*Задача 15. Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове).*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void average(int (*arr)[4]);
void fillData(int (*arr)[4], int argc, char* argv[]);
void checkData(int argc, char* argv);

int main(int argc, char* argv[]){
    int arr[2][4];

    fillData(arr, argc, argv);

    average(arr);

    return 0;
}

void checkData(int argc, char* argv){
    if(argv == NULL){
        exit (EIO);
    } else if (*argv < 48 || *argv > 57){
        exit (EINVAL);
    } else if (argc < 1 || argc > 9){
        exit (E2BIG);
    }
}

void fillData(int (*arr)[4], int argc, char* argv[]){
    int idx = 1;

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){

            checkData(argc, argv[idx]);
            
            arr[i][j] = atoi(argv[idx]);
            
            idx++;
        }
    }
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
    printf("\nThe average value of the rows in the array is: %f",average_rows);
    printf("\nThe average value of the columns  in the array is: %f",average_cols);
}
