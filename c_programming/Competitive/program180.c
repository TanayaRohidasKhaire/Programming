#include <stdio.h>
typedef unsigned int UNIT;


UNIT OnBit(UNIT iNo)
{
    UNIT iAns=0;
    UNIT iMask =0x8;

    iAns = iNo | iMask;
   
    return iAns;
        
}
int main()
{
    UNIT iNo=0;
    UNIT iRet =0;

    printf("Enter number \n");
    scanf("%d",&iNo);

    iRet = OnBit(iNo);

    printf("%u",iRet);
}
