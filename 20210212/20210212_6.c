/*Задача 6. Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/

#include <stdio.h>
#include <stdlib.h>
char* allocMemory(void);
char* fillArr(char * buffer);

int main(void){
    char *buffer;

    buffer = allocMemory(); /*allocate memory for num * 1 bytes*/
    buffer = fillArr(buffer); /*fill the array whit symbols from the keyboard and re-allocated memory*/

    printf("\n%s",buffer); /*print the string*/
    free(buffer);
    return 0;
}
char* allocMemory(void){
    char *buffer = NULL;
    buffer = (char*)malloc(2*sizeof(char));

    if(NULL == buffer){ /*chek is it allocated successfully*/
        printf("Memory not allocated!\n");
        exit(1);
    } else{
        printf("Memory successfully allocated.\n");
    }
    return buffer; 
}
char* fillArr(char * buffer){
    int i = 0;
    char c;

    printf("You can start enter symbols.\n");
    while((c=getchar())!=EOF){
        fflush(stdin);
        buffer[i] = c;
        i++;
        if(i >= _msize(buffer)){
            printf("Allocating more memorry -> i = %d\n ",i);
            buffer = realloc(buffer,2 * _msize(buffer));  /* Reallocating 2 * size of the current buffer*/
            printf("\nsizeof = %lu\n",_msize(buffer));
        }
    }
    buffer[i] = '\0';

    return buffer;
}