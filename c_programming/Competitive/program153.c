#include<stdio.h>

int Differnce(char * str)
{
    int iCntsmall =0,iCntcapital;
    

    while(*str != '\0')
    {
        if((*str >='a'&& *str<= 'z'))
        {
            iCntsmall++;
            
        }
        else if (*str >='A'&& *str<= 'Z')
        {
            iCntcapital++;
        }
        str++;
    }
    return (iCntsmall - iCntcapital)  ;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enetr string\n");
    scanf("%[^\n`]s",arr);

    iRet =Differnce(arr);

    printf(" %d", iRet);
}
