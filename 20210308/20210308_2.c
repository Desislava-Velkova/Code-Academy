/*Задача 2.
Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.*/

#include <stdio.h>

int main(void){
    FILE *fp = NULL;

    char *filename = "test.txt"; /*the old name of the file*/
    char *new = "new.txt"; /*the new name of the file*/

    fp = fopen (filename, "wt");
    if(fp==NULL){
        printf("Failed to open %s.\n",filename);
    }

    fclose (fp);

    int ret = rename(filename,new); /*if rename is successfull it will return 0, else it will return -1*/

    if(ret ==0)
        printf("File renamed successfully.");
    else
        printf("Failed to rename file.");
    
    remove ("test.txt"); /*delete the old one*/

    return 0;
}

