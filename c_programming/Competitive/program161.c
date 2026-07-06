#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
    
        
}
int main()
{
    char arr[20];
    char cValue;
    BOOL bRet =FALSE;

    printf("Enter the string\n");
    scanf("%[^\n]",arr);

    printf("Enter the character");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

        if(bRet == TRUE)
        {
            printf("Character found");
        }
        else
        {
            printf("Chacter not found");
        }

    return 0;
}