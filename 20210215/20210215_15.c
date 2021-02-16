/*Задача 15. Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.*/

#include <stdio.h>
void copyString(char *to, char *from);

int main(void){
    char string1[] = "A string to be copied.\0";
    char string2[40];
    char string3[]= "I am very good in strings coping!\0";
    char string4[40];
 
    copyString(string2,string1);
    printf("String2 = \"%s\"\n",string2);

    copyString(string4,string3);
    printf("String4 = \"%s\"\n",string4);

    return 0;
}
void copyString(char *to, char *from){
     while (*from){
        *to++ = *from++;
     }  
    *to = '\0';
}