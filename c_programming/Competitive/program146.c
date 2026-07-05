#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("------------------------------------------------------------\n");
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("------------------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%X\t\t%o\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}