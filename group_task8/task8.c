/*Задача 8 Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void reverse(char s[]);

int main(int argc, char* argv[]){

    printf("The string is: %s\n", argv[1]);
    reverse(argv[1]);
    printf("The reverse string is: %s", argv[1]);

    return 0;
}
void reverse(char s[]){
    int i,j,buff;

    if(s == NULL){
        exit(EIO);
    }

    for(i =0, j =(strlen(s)-1); i < j; i++, j--){
        if (s[i] > 127 || s[j] < 0){
            exit(EINVAL);

        }else {
            buff = s[i];  
            s[i] = s[j];
            s[j] = buff;
        }
    }
}
