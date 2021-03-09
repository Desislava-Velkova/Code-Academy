/*Задача 16.
Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл)*/

#include <stdio.h>
#include <string.h>
#define MAX 500

int main(void){
    int lno, ctr = 0;
    char ch;

    FILE *fp1, *fp2;
	char filename[MAX];
    char str[MAX], temp[] = "temp.txt";

	printf("\tInput the file name to be opened : "); /*asks user for the file name*/
	scanf("%s",filename);	

    fp1 = fopen(filename, "r");

    if (!fp1){
        perror("Error opening file!");
        return -1;
    }
    fp2 = fopen(temp, "w");  /*open the temporary file in write mode*/

    if (!fp2){
        perror("Unable to open a temporary file to write!!\n");
        fclose(fp1);
        return -1;
    }

    printf("\tInput the line you want to remove :");
    scanf("%d", &lno);
	lno++;

    /*copy all contents to the temporary file except the specific line*/
    while (!feof(fp1)){
        strcpy(str, "\0");
        fgets(str, MAX, fp1);
        if (!feof(fp1)){
            ctr++;
            /* skip the line at given line number */
            if (ctr != lno){
                fprintf(fp2, "%s", str);
                }
            }
        }
    /*closes the 2 files*/
    fclose(fp1);
    fclose(fp2);
    remove(filename);  		/*remove the original file*/
    rename(temp, filename); 	/*rename the temporary file to original name*/


    fp1 = fopen(filename,"r"); /*opens the file again in read mode*/
    ch = fgetc(fp1); 

    /*prints the content after del the row*/
    printf("Now the content of the file %s is : \n",filename); 
    while(ch!=EOF) {  
        printf("%c",ch); 
        ch=fgetc(fp1); 
    }

    fclose(fp1);

    return 0;
} 
