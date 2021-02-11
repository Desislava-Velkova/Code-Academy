/*Задача 21. Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). Използвайте “Метода на
мехурчето”, потърсете в интернет. */

#include <stdio.h>
void sortArr(char *s);

int main(void){
    char letters[] = {'B','A','D','C','F','E','G','\0'};
    printf("The unsorted array is: %s\n",letters);

    sortArr(letters);

    printf("The sorted array is: %s",letters);

    return 0;
}
void sortArr(char *s){
    int i, j;
    char buf;
   
    for(i=0; s[i]; i++){
        for(j=i+1; s[j]; j++){
            if(s[i] > s[j]){
                buf = s[i];
                s[i] = s[j];
                s[j] = buf;
            }
        }
    }
}
