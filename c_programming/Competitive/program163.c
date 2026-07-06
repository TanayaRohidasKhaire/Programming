#include<stdio.h>

int FirstChar(char *str,char ch)
{
    int iPos =0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iPos;
        }
        str++;
        iPos ++;
    }
    
    return -1;
        
}
int main()
{
    char arr[20];
    char cValue;
    int iRet =0;

    printf("Enter the string\n");
    scanf("%[^\n]",arr);

    printf("Enter the character");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    
        printf("First occurrence is at index %d\n", iRet);
    

    return 0;
}