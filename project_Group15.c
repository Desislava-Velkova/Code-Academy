/* Напишете функция, която получавa  като параметър две числа,
и връща като резултат броя на позициите в битовото представяне на числата,
на които двете числа имат различни стойности. Водещите нули да се игнорират
(тоест броенето да започне от най-старшия вдигнат бит на по-голямото число). */

#include <stdio.h>

int numberDigits(unsigned int, unsigned int);/*return binary numer*/
void decToBin(unsigned int);/*reverse decimal do binary*/
int inputFurstDigit(void);/*input A from the keyboard*/
int inputSecondDigit(void);/*input B from the keyboard*/

int main(void){
    int a, b;
    a = inputFurstDigit();       
    
    printf("You entered A with absolute value of %d\n", a);
    printf("Binary value is: ");
    decToBin(a);
    printf("\n");

    b = inputSecondDigit();

    printf("You entered B with absolute value of %d\n", b);
    printf("Binary value is: ");
    decToBin(b);
    printf("\n\nThe sum of the differences between the numbers on bit level is: %d\n\n", numberDigits(a, b));
    return 0;
}
int inputFurstDigit(void){
    int status, a;
    do{
        printf("Enter a decimal value for A: ");
        status = scanf("%d", &a);
        getchar();
        if (status == 0){
            printf("Invalid decimal. Pls. enter again.\n");
        }   
    } while (status == 0); 
    if(a < 0){
       	a = ~a;
       	a += 1;
    }
    return a;
}
int inputSecondDigit(void){
    int status, b;
    do{
        printf("Enter a decimal value for B: ");
        status = scanf("%d", &b);
        getchar();
        if (status == 0){
            printf("Invalid decimal. Pls. enter again.\n");
        }     
    } while (status == 0);
    if (b < 0){
       	b = ~b;
       	b += 1;
    }
   
    return b;
}
int numberDigits(unsigned int a, unsigned int b){
    int c = a ^ b;
	int n = 0;
	while(c != 0){
		if(c & 1)
			++ n;
		c >>= 1;
   	}
    return n;
}
void decToBin(unsigned int n){ /*function return binary numbers whithout zero value after the most significan byte 1*/
    if (n >> 1) {
        decToBin(n >> 1);
    }
    (n & 1) ? printf("1") : printf("0");
}
