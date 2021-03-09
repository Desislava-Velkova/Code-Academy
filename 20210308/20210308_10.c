/*Задача 10.
Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/

#include <stdio.h>

int main(void){
   FILE *fp = NULL;
   int len = 0;

   fp = fopen("test.txt", "rt"); /*opens the txt file for reading*/

   if( fp == NULL ){  /*if the file opening fails*/
      perror ("Error opening file");
      return(-1);
   }

   fseek(fp, 0, SEEK_END); /*sets the file position of the stream to the beginning.*/

   len = ftell(fp); /*returns the current value of the position indicator.*/

   fclose(fp); /*closes fp pointer*/

   printf("Total size of file.txt = %d bytes\n", len); /*print the length in bytes*/
  
   return 0;
}
