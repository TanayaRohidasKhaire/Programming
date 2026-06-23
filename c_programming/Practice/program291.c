#include<stdio.h>

void ReverseDisplay(char * str)
{
    char *start =NULL;

    start = str;
    while (*str != '\0')
    {
        str++;
    }
    //issue due to \0 in array white space
    while(start<=str)
    {
        printf("%c\n",*str);
        str--;
    }
}
int main()
{
    char Arr[50]={'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s" , Arr);

    ReverseDisplay(Arr);

    return 0;
}