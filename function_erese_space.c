/*10. Напишете функция , която премахва последните шпации и
табулации от всеки входен ред и изтрива празните редове*/

#include <stdio.h>
#include <string.h>
void erase(char a[100]);

int main()
{
    erase("This is my sentence    \n \n \t \t \n");
    return 0;
}
 
void erase(char a[100]){
    char result[100];
    int i, br=0;
    int len = strlen(a);

    for(i=len-1; (a[i] == ' ') || (a[i] == '\n') || (a[i] == '\t'); i--){
        br++;
    }

    for(i=0; i < len-br ; i++){
        result[i] = a[i];
    }

    printf("%s", result);
    printf("END");
}
        
