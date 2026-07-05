#include<stdio.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str=='a') || (*str=='e') || (*str=='i') ||
           (*str=='o') || (*str=='u'))
           
        {
            return True;
        }

        str++;
    }

    return False;
}

int main()
{
    char arr[20];
    BOOL bRet;

    printf("Enter string:\n");
    scanf("%[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == True)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}