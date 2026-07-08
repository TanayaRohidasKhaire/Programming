#include <stdio.h>
typedef unsigned int UNIT;


UNIT OffBit(UNIT iNo)
{
    UNIT iAns=0;
    UNIT iMask =0x240;

    iAns = (iNo | iMask);
   
    return iAns;

        
}
int main()
{
    UNIT iNo=0;
    UNIT bRet =0;

    printf("Enter number \n");
    scanf("%d",&iNo);

    bRet = OffBit(iNo);

    printf("%d",bRet);
}
