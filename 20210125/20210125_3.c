/*3.Напишете програма, която преброява шпациите, табулациите и
новите редове*/

#include <stdio.h>

int main(void){
    int c;
    int count_spase = 0, count_tab = 0, count_newRow =0;

     while((c = getchar()) != EOF){
        if(c =='\n'){
            count_newRow++;
        }else if(c =='\t'){
            count_tab++;   
        }else if(c ==' '){
            count_spase++;
        }
    }

    printf("\nThe number of new rows: %d\nThe number of spase: %d\nThe number of tabs: %d",count_newRow,count_spase,count_tab);

    return 0;
}