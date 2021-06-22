/*Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>

int asciileter = 96;
void check(char *str);

int main(int argc, char *argv[])
{
    void (*pfCheck)(char *str) = NULL;
    pfCheck = check;
    char str[255];
    char c = 0;
    int i = 0;
    while ((c = getchar()) != '\n')
    {
        str[i] = c;
        i++;
        if (i == 254)
        {
            exit(EFBIG);
        }
    }
    (*pfCheck)(str);
    return 0;
}

void check(char *str)
{
    int res[27] = {0};
    int count = 0;
    
    while (*str)
    {
        *str = tolower(*str);
        if (*str >= 'a' && *str <= 'z')
        {
            res[*str - asciileter]++;
            str++;
            count++;
        }
        else
        {
            str++;
        }
    }
    if (count < 1)
    {
        exit(ENOLCK);
    }

    for (int i = 1; i < 27; i++)
    {
        if (res[i] > 0)
        {
            printf("The letter %c is present %d times.\n", i + asciileter, res[i]);
        }
    }
}
