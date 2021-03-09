/*Задача 11.
Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/

#include <stdio.h>

int main(void){
    FILE *fp = NULL;
    fpos_t position;

    fp = fopen("test.txt", "wt"); /*opens txt file in write mode, if file not exist it will create one*/

    if( fp == NULL ){  /*if the file opening fails*/
        perror ("Error opening file");
        return(-1);
    }

   fgetpos(fp, &position); /*gets the current file position of the stream and writes it to pointer to a fpos_t */

   fputs("This is a test", fp);
  
   fclose(fp);
    
    return 0;
}