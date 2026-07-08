#include <stdio.h>
typedef unsigned int UNIT;


UNIT ToggalBit(UNIT iNo)
{
    UNIT iAns=0;
    UNIT iMask =0x240;

    iAns = iNo ^ iMask;
   
    return iAns;
        
}
int main()
{
    UNIT iNo=0;
    UNIT iRet =0;

    printf("Enter number \n");
    scanf("%d",&iNo);

    iRet = ToggalBit(iNo);

    printf("%u",iRet);
}
