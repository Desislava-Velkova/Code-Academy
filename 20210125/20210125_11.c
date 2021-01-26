/*11*. Напишете функция void reverse(char s[]), която обръща
низа char s[]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга*/

#include <stdio.h>
#include <string.h>
void reverse(char str[]);

int main(){
   char c;
   char str[200];
   int count = 0, i = 0;

    while ((c=getchar()) != '\n'){
        str[i] = c;
        i++;
        count++;
        if(count == 199){
            break;
        }
    }
    reverse(str);

    return 0;
}
void reverse(char str[]){
    int i,j;
    char new[200];
    printf("The oposite one is:");

    for(i = 0, j = (strlen(str));  i <= strlen(str);  i++, j-- ){
        new[i]=str[j];
        putchar(new[i]);
    }
}
