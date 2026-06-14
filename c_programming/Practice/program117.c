#include<stdio.h>

void Display( int  Arr[] , int iSize)      
{
    int iCnt=0;
    for(iCnt=0; iCnt<iSize ;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
   
    
}
int main()
{
    int iLength=4;
    int Brr[iLength];

    printf("Enter the number:\n");

    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
        
    }

    Brr[0]=10;

 
    Display (Brr,iLength);
 
    return 0;
}