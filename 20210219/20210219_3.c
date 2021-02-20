/*Задача 3. Указатели към структура, предаване на структура на функция по
стойност и по референция*/

#include <stdio.h>
#include <string.h>
struct tagPaper {
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};
void printPaper( struct tagPaper paper ) { /* by value */
    printf( "Paper id : %d\n", paper.m_nBookId);
    printf( "Paper title : %s\n", paper.m_szTitle);
    printf( "Paper author : %s\n", paper.m_szAuthor);
    printf( "Paper subject : %s\n", paper.m_szSubject);
}
void printPtrPaper( struct tagPaper* pPaper ) {
    printf( "Paper id : %d\n", pPaper->m_nBookId);
    printf( "Paper title : %s\n", pPaper->m_szTitle);
    printf( "Paper author : %s\n", pPaper->m_szAuthor);
    printf( "Paper subject : %s\n", pPaper->m_szSubject);
}
void fillStruct(struct tagPaper* pPaper){
    printf( "Insert Paper id:\n");
    scanf("%d",&pPaper->m_nBookId);

    printf( "Insert title :\n");
    scanf("%s",pPaper->m_szTitle);

    printf( "Insert author :\n");
    scanf("%s",pPaper->m_szAuthor);
    
    printf( "Insert subject :\n");
    scanf("%s",pPaper->m_szSubject); 
}
int main(void){
    struct tagPaper myPaper;

    fillStruct(&myPaper);
    
    printf("\n-------------------------------------------\n");
    printPaper(myPaper);
    printf("\n-------------------------------------------\n");
    printPtrPaper(&myPaper);
    printf("\n-------------------------------------------\n");

    return 0;
}
