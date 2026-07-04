#include<stdio.h>


void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch =='a')
    {
        printf("7AM");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("8:30 AM");
        
    }
    else if(ch == 'C'|| ch == 'c')
    {
        printf("9:20 AM");
        
    }
    else if(ch =='D'||ch =='d')
    {
        printf("10:30 AM");
        
    }
    else
    {
        printf("This division is not available");
    }
}
int main()
{
    char cValue ='\0';
    

    printf("enter the chareacter ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    
    return 0;
}

