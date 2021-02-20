/*Задача 2. Инициализиране на структура, вложени структури*/

#include <stdio.h>
#include <string.h>
struct tagDetail{
    unsigned m_uAcadId;
    char m_szAcadName[BUFSIZ];
    char m_szAcadUrl[BUFSIZ];
};
struct tagCadet{
    unsigned m_uCadetId;
    char m_CadetName[BUFSIZ];
    float m_uAverageRating;
    struct tagDetail m_detail;
};
void printStruct(struct tagCadet cadet);
void fillStruct(struct tagCadet* cadet);

int main(void){
    struct tagCadet cadet;

    fillStruct(&cadet);

    printStruct(cadet);
    
    return 0;
}
void printStruct(struct tagCadet cadet){
    printf("\n-------------------------------------------\n");
    printf("\tCadet Id is: %d\n", cadet.m_uCadetId);
    printf("\tName is: %s\n", cadet.m_CadetName);
    printf("\tRating (2-6) is: %f\n", cadet.m_uAverageRating);
    printf("\tAcademy Id is: %d\n", cadet.m_detail.m_uAcadId);
    printf("\tName is: %s\n", cadet.m_detail.m_szAcadName);
    printf("\tURL is: %s\n", cadet.m_detail.m_szAcadUrl);
    printf("\n-------------------------------------------\n");
}
void fillStruct(struct tagCadet* cadet){
    cadet->m_uCadetId = 1;
    strcpy(cadet->m_CadetName , "Ivan Ivanov");
    cadet->m_uAverageRating = 5.53;
    cadet->m_detail.m_uAcadId = 13;
    strcpy(cadet->m_detail.m_szAcadName , "Code Academy");
    strcpy(cadet->m_detail.m_szAcadUrl , "https://codeacademy.bg");

}