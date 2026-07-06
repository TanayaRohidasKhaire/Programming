#include<stdio.h>

int LastChar(char *str,char ch)
{
    int iPos =-1;
    int i =0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos=i;
        }
        str++;
        i++;
    
    }
    
    return iPos;
        
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

    iRet = LastChar(arr,cValue);

    
     printf("Last occurrence is at index %d\n", iRet);
    

    return 0;
}