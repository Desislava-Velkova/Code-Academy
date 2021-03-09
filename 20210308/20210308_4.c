/*Задача 4.
Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла;*/

#include <stdio.h>

int main(void){
   FILE *fp = NULL; /*file pointer to null*/
   char str[60]; /*string for storing the info*/

   fp = fopen("test1.txt", "rt"); /*Opens existings txt file for reading.*/

   if(fp == NULL){ /*if opening the file fails*/
        perror ("Error opening file");
        return(-1);
   }

   if(fgets(str,60,fp)!= NULL){ /*fgets take the information from fp and store it in str*/
        printf("%s",str);
   }

   fclose(fp); /*close the file*/

   fp = NULL;

   return 0;
}