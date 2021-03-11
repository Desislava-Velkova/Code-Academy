/*#include <stdio.h>
#include <string.h>
#include <errno.h>

int main(void){
    FILE *fp = NULL;
    fp = fopen("unexisting.txt", "r");

    if( NULL == fp ) {
        perror("ERR: ");
        printf("\nerrno: %d : %s\n", errno, strerror(errno));
    } else {
        fclose(fp);
    }

    return 0;
}*/
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void sleep(int);
void ctrlc_handler(int iUnused) {
    printf("\nCtrl + C\n");
    exit(EXIT_FAILURE);
}
int main(void) {
    signal(SIGINT, ctrlc_handler);

    while (!0){
        sleep(1);
    }

    return 0;
}