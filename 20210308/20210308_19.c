/*Задача 19: Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    char c, text[50];
    int j,i;
    FILE *fp = NULL;

    if(argc == 1){
        printf("There are no files provided!\nPlease insert text.\n");
        scanf("%s",&text);
        printf("The text you provided is: %s",text);
    } else {
        for(i=1; i < argc; i++){
            j=0;
            memset(text,0,strlen(text));
            fp = fopen(argv[i], "r");
            while ((c=fgetc(fp)) != EOF){ 
                text[j] = c;
                j++;
            }
            printf("The text in file %s is: %s",argv[i],text);
            fclose(fp);
        }
    }
    return 0;
}