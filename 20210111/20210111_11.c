/*11) Разбийте число като сума от степени на двойката.*/

#include <stdio.h>

int main(){
    int num = 15;
    int mask = 1;
    int res;
    
    res = num & mask;
    printf("%d\n",res);
    
    mask = mask << 1;
    res = num & mask;
    printf("%d\n",res);

    mask = mask << 1;
    res = num & mask;
    printf("%d\n",res);

    mask = mask << 1;
    res = num & mask;
    printf("%d\n",res);


    return 0;
}