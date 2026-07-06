# include<stdio.h>
typedef unsigned int UINT;

UINT ToggalBit(UINT iNo,UINT iPos)
{
    UINT iMask=0x1;
    UINT iResult=0;

    iMask = iMask << (iPos-1);

    iResult=iNo^ iMask;

    return iResult;

}

int main()
{
    UINT iValue=0,iRet=0,iLocation=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter position \n");
    scanf("%d",&iLocation);

    iRet= ToggalBit(iValue,iLocation);

    printf("Updated number is%d \n",iRet);


    return 0;
}