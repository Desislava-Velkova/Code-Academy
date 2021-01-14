/*12. Напишете програма PrintPatterns, която отпечата следните текстови графики
на екрана. Графиките една под друга:(a)*/

#include <stdio.h>

int main(){
    int i,j,k;
    char hastag = '#';
    char space = ' ';

    for(i=6; i>0; i--){
        for(k=11; k>i+i; k=k-2){
            printf("%c",space);
        }
        for(j=i+i-1; j>0; j--){
            printf("%c",hastag);
        }
        for(k=11; k>i; k=k-2){
            printf("%c",space);
        }
        printf ("\n");
    }
    
    return 0;
}