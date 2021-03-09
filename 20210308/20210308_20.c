/*Задача 19: Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/

#include <stdio.h>
#include <string.h>

int sum_g = 1000;
char text_g[50];
int arr_g[11]; /*array for storing the numbers from input file*/

void findCombinationsUtil(int arr[], int index, int num, int reducedNum){
    /*Base condition*/
    int sum = 0;
    char text[50];
    if (reducedNum < 0){
        return 0;
    } 
    /*If combination is found, print it*/
    if (reducedNum == 0){
        for (int i = 0; i < index; i++){
            sum += arr_g[arr[i]];
        }
        if(sum < sum_g){
            sum_g = sum;
            memset(text_g,0,strlen(text_g));
            for (int i = 0; i < index; i++){
                sprintf(text,"\n%d %d",arr[i], arr_g[arr[i]]);
                strcat(text_g, text);
            }
            strcat(text_g, "\n");
        }
        return;
    }
 
    /* Find the previous number stored in arr[]. It helps in maintaining increasing order*/
    int prev = (index == 0)? 1 : arr[index-1];
 
    for (int k = prev; k <= num ; k++){
        /* next element of array is k*/
        arr[index] = k;
 
        /*call recursively with reduced number*/
        findCombinationsUtil(arr, index + 1, num, reducedNum - k);
    }
}
 
void findCombinations(int n){
    int arr[n]; /*store the combinations*/
 
    findCombinationsUtil(arr, 0, 10, n);/*find all combinations*/
}
 
int main(void){
    int n = 15;

    FILE *fp1 = NULL;
    fp1 = fopen("C:\\Users\\stifa\\codeAcademy\\Code-Academy\\20210308\\input3.txt", "r");

    if(NULL == fp1){
        perror("Error opening file!");
        return -1;
    }
   for(int i =0; i<11; i++){ /*copy the input info from the file*/
       fscanf(fp1, "%d,", &arr_g[i]);
    }

    findCombinations(n);
    FILE *fp2 = NULL;

    fp2 = fopen("output3.txt", "w"); /*opens txt in write mode*/

    if(NULL == fp2){
        perror("Error opening file!");
        return -1;
    }

    fprintf(fp2,text_g);
    fprintf(fp2,"%d",sum_g);

    printf("%s",text_g);
    printf("%d",sum_g);

    fclose(fp2);
    return 0;
}