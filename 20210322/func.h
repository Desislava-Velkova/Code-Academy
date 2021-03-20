#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int size_g; /*global var for the size of the playfield*/

void delay(int numOfSec);
int userChoice(void);
void fillPlayGround(char (*playground)[size_g]);
void printPlayGround(char (*playground)[size_g], FILE *fp);
int findSolution(char (*playground)[size_g]);
void playgroundRandomization(int numOfTests);