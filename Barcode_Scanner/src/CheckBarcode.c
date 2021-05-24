#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Defines.h"
#include "FileParses.h"
#include "CheckBarcode.h"

static int barCodeLength = 0;

int takeBarcodeLen(void)
{
    return barCodeLength - 2;
}
int checkC(char *decoded, int size)
{
    int sum = 0;
    for (int i = 1; i <= size; i++)
    {
        int digit = 0;
        if (*decoded == '-')
        {
            digit = 10;
        }
        else
        {
            digit = *decoded - ASCII;
        }

        sum += ((size - i) % 10 + 1) * digit;
        decoded++;
    }
    return sum % 11;
}
int checkK(char *decoded, int size)
{
    int sum = 0;
    for (int i = 1; i <= size + 1; i++)
    {
        int digit = 0;
        if (*decoded == '-')
        {
            digit = 10;
        }
        else
        {
            digit = *decoded - ASCII;
        }

        sum += ((size - i + 1) % 9 + 1) * digit;
        decoded++;
    }
    return (sum % 11);
}
bool checkSumValidation(char *decoded, int size)
{

    char *ptr = decoded;
    size = size - 2;

    if (checkC(decoded, size) == (*(decoded + size) - ASCII))
    {
        if (checkK(ptr, size) == (*(ptr + size + 1) - ASCII))
        {

            return true;
        }
        else
        {

            return false;
        }
    }
    else
    {

        return false;
    }
}
bool isCorrectBarcode(CodeTable_t *codTable, int *bina, int counterLen)
{
    int element = 0;

    for (int i = 0; i < counterLen; i++)
    {
        if (i % SIZE_ELEMENT == 0)
        {
            if (isStartStop(codTable, element))
            {
                return true;
            }
            else
            {
                element = 0;
            }
        }
        else
        {
            element = catIntegers(element, bina[i]);
        }
    }

    return false;
}
int *reverse(int *arr, int n)
{
    int temp = 0;
    for (int low = 0, high = n - 1; low < high; low++, high--)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
    }
    return arr;
}
char *assignBarcode(int counterLen, int *binData, CodeTable_t *codTable)
{
    int element = 0, size = 10;
    char *barcode = AllocCharArray(size);
    char *start = barcode;

    if (isCorrectBarcode(codTable, binData, counterLen))
    {
        for (int i = 0; i < counterLen; i++)
        {
            if (i % SIZE_ELEMENT == 0)
            {
                findCodeinTable(element, barcode, codTable);

                barcode++;
                barCodeLength++;
                element = binData[i];
            }
            else
            {
                element = catIntegers(element, binData[i]);
            }
        }
    }
    else
    {
        reverse(binData, counterLen);
        if (isCorrectBarcode(codTable, binData, counterLen))
        {
            for (int i = 0; i < counterLen; i++)
            {
                if (i % SIZE_ELEMENT == 0)
                {
                    findCodeinTable(element, barcode, codTable);

                    barcode++;
                    barCodeLength++;
                    element = binData[i];
                }
                else
                {
                    element = catIntegers(element, binData[i]);
                }
            }
        }
        else
        {

            printf("Barcode truncated. Move the scanner.\n");
            exit(EXIT_SUCCESS);
        }
    }

    return start += 2;
}

void findCodeinTable(int element, char *barcode, CodeTable_t *codTable)
{

    for (int i = 0; i < CODE_TABLE_LEN; i++)
    {
        if (element == codTable->code[i] && !isStartStop(codTable, element))
        {
            *barcode = codTable->symbols[i];

            break;
        }
    }
}

int catIntegers(unsigned int firstNumb, unsigned int secondNumb)
{
    char str1[SIZE_ELEMENT + 1];
    char str2[SIZE_ELEMENT + 1];

    sprintf(str1, "%d", firstNumb);
    sprintf(str2, "%d", secondNumb);

    strcat(str1, str2);

    return atoi(str1);
}

bool isStartStop(CodeTable_t *codTable, int element)
{
    if (element == codTable->code[11])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printBarcode(char *array, int size)
{

    if (checkSumValidation(array, size))
    {
        printf("\nThe barcode is:\t");
        for (int i = 0; i < size; i++)
        {
            printf("%c", *array);
            array++;
        }
    }
    else
        printf("The control digits are wrong!");
    exit(EXIT_SUCCESS);
}