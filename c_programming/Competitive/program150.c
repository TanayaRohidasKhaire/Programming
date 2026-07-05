#include <stdio.h>

void Display(char ch)
{
    
if(ch >='A'&&ch <='Z')
{
    printf("%d\t%o\t%X\n",ch,ch,ch);
}
}

int main()
{
    char cValue='\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}