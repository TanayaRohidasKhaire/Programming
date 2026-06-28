#include<stdio.h>


int main()
{
    int iNo=0,iAns=0;
    int iMask =4; // 3rd bit     1   2  |4|  8

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns= iNo & iMask;

    if( iAns == iMask )
    {
        printf("Thired bit is ON\n");
    }
    else
    {
        printf("third bit is OFF\n");
    }



    

    return 0;
}
