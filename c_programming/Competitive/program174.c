#include <stdio.h>
typedef int BOOL;
typedef unsigned int UNIT;

# define TRUE 1
# define FALSE 0

BOOL ChkBit(UNIT iNo)
{
    UNIT iAns=0;
    UNIT iMask =0x00001C0;

    iAns = iNo & iMask;
    if(iAns== iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }


        
}
int main()
{
    UNIT iNo=0;
    UNIT bRet =0;

    printf("Enter number \n");
    scanf("%d",&iNo);

    bRet = ChkBit(iNo);

    if(bRet == TRUE)
    {
        printf("bit is ON");
    }
    else
    {
        printf("bit is OFF");
    }
}
