/*2. Напишете макрос swap(t, x, y), койти променя местата на двата аргумента от тип t.*/

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define swap(t, x, y) {t i=x; x=y; y=i;}

int main(int argc, char* argv[]){
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    if(argc < 1 || argc > 3){
        printf("You need to input 2 arguments for this task.\n");
        exit(E2BIG);
    } else if (*argv[1] < 48 || *argv[1] > 57){
        exit(EIO);
    } else if (*argv[2] < 48 || *argv[2] > 57){
        exit(EIO);
    }

    swap(int,x,y);
    printf("The value of x=%d, and the value of y=%d\n",x,y);

    return 0;
}

