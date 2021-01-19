//13. Логически оператори

#include <stdio.h>

int main(){
    int nA, nB, nX, nY;/* използвайте scanf */

    printf("Insert number for nA\n");
    scanf("%d",&nA);

    printf("Insert number for nB\n");
    scanf("%d",&nB);
    
    printf("Insert number for nX\n");
    scanf("%d",&nX);
    printf("Insert number for nY\n");
    scanf("%d",&nY);

    if( nA > nB && nA !=0 ){
        printf("&& Operator : Both conditions are true\n");
    }
    if( nX > nY || nY != nB){
        printf("|| Operator : Only one condition is true\n");
    }
    if( ! (nA > nB && nB !=0 ) ){
        printf(" ! Operator : Both conditions are true\n");
    }else{
        printf("Both conditions are true.\n");
    }
    if( ! (nA < nB && nB !=0 ) ){
        printf(" ! Operator : One of the conditions is false\n");
    }
}
/* опитайте различни комбинации, следете приоритета на
операторите */
