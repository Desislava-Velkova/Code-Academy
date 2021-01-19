//12. Relational operators


#include <stdio.h>

int main() {
    int nX, nY; /*homework, input with scanf */
    
    printf("Insert number for nX\n");
    scanf("%d",&nX);
    printf("Insert number for nY\n");
    scanf("%d",&nY);

    if (nX == nY){
        printf("%d and %d are equal\n", nX, nY);
    }else{
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY){
        printf("%d is greater than %d\n", nX, nY);
    }
    if (nX < nY){
        printf("%d is less than %d\n", nX, nY);
    }
    if (nX <= nY ){
      printf("%d is either less than or equal to  %d\n", nX, nY );
    }
	
    if (nX >= nY){
      printf("nX is either greater than  or equal to nY\n",nX, nY);
    }
} /* използвайте и останалите оператори за сравнение */