#include "func.h"

int size_g; /*global var for the size of the playfield*/

int userChoice(void){
    int numOfTests;

    printf("\n\t**************  Wellcome to \"Bunny In Danger\"  **************\n");
    do{
        printf("Enter the size you want the playing field to be.\n");
        scanf("%d", &size_g); /*takes value for the size of the playground*/

        if(size_g < 4){
            printf("The playfield can't be less than 4x4.\n Please insert a corect value!\n\n");
        }
    } while(size_g < 4);

    do{
        printf("Enter the number of test you want to generate.\n");
        scanf("%d", &numOfTests); 

        if(numOfTests < 1 || numOfTests > 40){
            printf("The number of tests can't be less than 1 and more than 40.\n Please insert a corect value!\n\n");
        }
    } while((numOfTests < 1) || (numOfTests > 40));

    return numOfTests;
}

void playgroundRandomization(int numOfTests){
    char playground[size_g][size_g];

    FILE *fp = NULL;
    fp = fopen("Results.txt", "w"); /*creates txt file in write mode to store the results*/

    if(NULL == fp){
        perror("The program can't store the info in .txt file. Error ");
    }

    fillPlayGround(playground);

    int solution =  findSolution(playground);

    printf("\n\tTest № %d\n",numOfTests);
    fprintf(fp,"Test № %d\n", numOfTests);

    printf("\tSolution = %d\n",solution);
    fprintf(fp,"Solution = %d\n",solution);

    printf("\tSize of the playground: %dx%d\n", size_g, size_g);
    fprintf(fp,"Size of the playground: %dx%d\n", size_g, size_g);

    printPlayGround(playground,fp);
}

void fillPlayGround(char (*playground)[size_g]){
    int i, j;

    srand((unsigned)(time(NULL)));

    for(i=0; i<size_g; i++){ /*fills the array with random numbers from 0 to 1 */
        for(j=0; j<size_g; j++){
            playground[i][j] = (rand()%2);
        }
    }

    playground[0][0] = 1; /*fills the first element of the array with 1*/
    playground[size_g-1][size_g-1] = 'F'; /*fills the last element of the array with the final letter*/
}

int findSolution(char (*playground)[size_g]){
    int solution = 0, i = 1, j = 0;

    if((playground[1][0] == 0) && (playground[0][1] == 0)){ /*if the down and right directory are zero */
        return solution;
    }
    /*start with the Down Direction*/
    while((playground[i][j] != 0) && (i < size_g)){
        if((playground[i+1][j] == 0) || (i+1 >= size_g)){
            while((playground[i][j] != 0) && (j < size_g)){
                if(playground[i][j] == 'F'){
                    solution++;
                    break;
                }
                if((playground[i][j+1] == 0) || (j  >= size_g)){
                    break;
                }
                j++;
            }
        }
        i++;
    }

    i = 0;
    j = 1;

    /*start with the Right Direction*/
    while((playground[i][j] != 0) && (j < size_g)){
        if((playground[i][j+1] == 0) || (j+1 >= size_g)){
            while((playground[i][j] != 0) && (i < size_g)){
                if(playground[i][j] == 'F'){
                    solution++;
                    break;
                }
                if((playground[i+1][j] == 0) || (i  >= size_g)){
                    break;
                }
                i++;
            }
        }
        j++;
    }

    return solution;   
}

void printPlayGround(char (*playground)[size_g], FILE *fp){
    printf("\n\t*********** Playground *************\n");
    fprintf(fp, "\n\t*********** Playground *************\n");

    for(int i=0; i<size_g; i++){
        printf("\n");
        fprintf(fp,"\n");

            for(int j=0; j<size_g; j++){
                if(playground[i][j] == 'F'){
                    printf("\t %c",playground[i][j]);
                    fprintf(fp,"\t %c",playground[i][j]);
                } else {
                    printf("\t %d",playground[i][j]);
                    fprintf(fp,"\t %d",playground[i][j]);
                }
            }
    }
    printf("\n\n");
    fprintf(fp,"\n\n");
}

void delay(int numOfSec){ 
    int milliSeconds = 1000 * numOfSec; /*Converting time into milliSeconds */
  
    clock_t startTime = clock(); /*Storing start time */
  
    while (clock() < startTime + milliSeconds); /*looping till required time is not achieved */
} 