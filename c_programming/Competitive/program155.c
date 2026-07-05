#include<stdio.h>


void Reverse(char * str)
{
    char temp = '\0';
    int iStart = 0;
    int iEnd =0;

    while (str[iEnd] != '\0')
    {
        iEnd++;
            
    }
    iEnd--;

    while(iStart < iEnd)
    {
        temp = str [iStart];
        str[iStart ]= str[iEnd];
        str [iEnd]=temp;
        iStart ++;
        iEnd--;
    }

   
}

int main()
{
    char arr[20];
   

    printf("Enetr string\n");
    scanf("%[^\n`]s",arr);

    Reverse(arr);

    printf("Reversed string is%s : ",arr);

    
}
