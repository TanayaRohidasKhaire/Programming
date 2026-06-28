#include<stdio.h>

typedef unsigned int UINT;
int main()
{
    UINT iNo=0;
    UINT iAns=0;
    UINT iMask =4; 

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
