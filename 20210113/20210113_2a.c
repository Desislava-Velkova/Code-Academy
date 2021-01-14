/*2. Да съберем пак две числа от тип char 255 + 10, да използваме функцията
за представяне на числата в двоичен вид:*/

#include <stdio.h>

void convert(int num){
	int i;
	for(i=1<<7; i>0; i >>= 1){
		if(num & i){
			printf("1");
		}else{
			printf("0");
		}
	}
    printf("\n");
}
int main(){
	unsigned char a = 255;
	convert(a);

    unsigned char b = 10;
    convert(b);

    unsigned char res = a+b;
    convert(res);

	return 0;
}