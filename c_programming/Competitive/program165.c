#include<stdio.h>

void StrRevX(char *str)
{
    int end=0;
    int start=0;
    int temp =0;

    while(str[end] !='\0')
    {
        end++;
    }
    end--;   
    
    while (start<end)
    {
        temp = str[start];
        str [start]=str[end];
        str[end]=temp;

        start ++;
        end--;

    }
    
}
int main()
{
    char arr[20];
  
    printf("Enter the string\n");
    scanf("%[^\n]",arr);

    StrRevX(arr);

    printf("Modified string is%s\n", arr);
    

    return 0;
}