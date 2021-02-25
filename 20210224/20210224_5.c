/* Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо. */

#include <stdio.h>
#ifdef DEBUG 
/* условна компилация */
#define DEBUGMSG(msg) \
{ printf("DEBUG: %s\n", (msg)); }
#else
#define DEBUGMSG(msg)\
{ printf("This is the text after we define the DEBUG: %s\n", (msg)); }
#endif 

int main(void){
    
    DEBUGMSG("Test");

    return 0;
}