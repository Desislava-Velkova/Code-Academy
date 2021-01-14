/*12. Напишете програма PrintPatterns, която отпечата следните текстови графики
на екрана. Графиките една под друга: (b) */

#include <stdio.h>

int main(){
    int i,j,k,br;
    char hastag = '#';
    char space = ' ';

     for(i=5; i>=0; i--){
         br = 0;
        for(k=0; k<i; k++){
            printf("%c",space);
            br++;
        }
        for(j=11-(br+br); j>0; j--){
            printf("%c",hastag);
        }
        for(k=0; k<i; k++){
            printf("%c",space);
        }
        printf ("\n");
    }
    
    return 0;
}