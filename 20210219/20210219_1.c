/*Задача 1. Дефиниране на структура, достъп до членове */

#include <stdio.h>
#include <string.h>

struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};
void fillStruct(struct tagPaper* stPaper);
void printStruct(struct tagPaper stPaper);

int main(void){
    struct tagPaper stPaper; /*create variable from the struct type*/
    
    fillStruct(&stPaper);
    
    printStruct(stPaper);

    return 0;
}
void fillStruct(struct tagPaper* stPaper){
    stPaper->m_nBookId = 568;
    strcpy( stPaper->m_szTitle, " In Search of Lost Time");
    strcpy( stPaper->m_szAuthor, "Marcel Proust");
    strcpy( stPaper->m_szSubject, "Swann's Way, the first part of A la recherche de temps perdu,\n\
    \tMarcel Proust's seven-part cycle, was published in 1913.");
}
void printStruct(struct tagPaper stPaper){
    printf("\n-------------------------------------------\n");
    printf( "\tPaper id : %d\n", stPaper.m_nBookId);
    printf( "\tPaper title : %s\n", stPaper.m_szTitle);
    printf( "\tPaper author : %s\n", stPaper.m_szAuthor);
    printf( "\tPaper subject : %s\n", stPaper.m_szSubject);
    printf("-------------------------------------------\n");
}