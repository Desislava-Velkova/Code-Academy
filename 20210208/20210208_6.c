/*6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */

#include <stdio.h>
double average(int (*arr)[4]);

int main(void){
    int arr[2][4] = {
        {1,2,3,4},
        {5,6,7,8} };

    printf("The average value of the elements in the array is: %f",average(arr));
    
    return 0;
}
double average(int (*arr)[4]){
    int i,j,num_elements = 0;
    double count = 0.0;

    for(i=0; i<2; i++){ 
        for(j=0; j<4; j++){
            count += arr[i][j]; /*finds the sum of all elements*/
            num_elements++;   /*finds the number of elements in the array*/
        }
    }
    
   return count / (double)num_elements;
}