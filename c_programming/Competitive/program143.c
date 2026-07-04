#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >='0'&&ch<='9' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("enter the chareacter ");
    scanf("%c",&cValue);

    bRet =ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit");

    }
    else
    {
        printf("It is not a digit ");
    }
    return 0;
}

