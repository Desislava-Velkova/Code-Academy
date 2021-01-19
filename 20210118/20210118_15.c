/*15. Условен оператор (?:)
а) въведете стойност за nA с scanf
b) използвайте условния оператор за намиране на максималното от две
числа*/

#include <stdio.h>

int main(){
    int nA = 1;

    printf("Insert a number for A\n");
    scanf("%d", &nA); 

    int nB = (nA == 1 ? 2 : 0); // сравни числото

    printf("A value is %d\n",nA);
    printf("B value is %d\n",nB);

    int max = (nA > nB ? nA : nB);//намиране на по-голямото число

    printf("The bigger number is %d",max);

    return 0;
}
