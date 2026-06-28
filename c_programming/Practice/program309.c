#include<stdio.h>


int main()
{
    unsigned int iNo=0;
    unsigned int iAns=0;
    unsigned int iMask =4; 

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
