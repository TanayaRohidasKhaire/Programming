#include<stdio.h>

void StrCpysmall(char *src ,char *dest)
{

    while(*src != '\0')
    {
        if(((*src >='a') && (*src <='z'))|| (*src == ' '))
        {
            *dest = *src;
            dest++;
        }
        
        src++;
    }
    *dest='\0';

}

int main()
{
    char arr [30]="Marvellous multi OS";
    char brr[30];

    StrCpysmall(arr,brr);
    
    
    printf("modified String   : %s\n", brr);  


    return 0;
}