/*2. Да направим функция, която ще принтира числата от
десетичен в бинарен вид:*/

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
}
int main(){
	int num =20;
	convert(num);

	return 0;
}