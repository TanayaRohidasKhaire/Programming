#include<stdio.h>

int Countsmall(char * str)
{
    int iCnt =0;

    while(*str != '\0')
    {
        if((*str >='a'&& *str<= 'z'))
        {
            iCnt++;
            
        }
        str++;
    }
    return iCnt  ;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enetr string");
    scanf("%[^\n`]s",arr);

    iRet = Countsmall(arr);

    printf("Number of small letters = %d", iRet);
}
