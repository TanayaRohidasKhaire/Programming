
# include<stdio.h>
typedef unsigned int UINT;

UINT ToggalBits(UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask= 0;
    UINT iResult=0;

    iMask1 = iMask1<< (iPos1 -1);
    iMask2 = iMask2<< (iPos2 -1);
    iMask = iMask1 | iMask2;

    iResult= iNo ^ iMask;

    return iResult;

}
  
int main()
{
    UINT iValue =0,iRet =0,iLocation1=0,iLocation2=0;

    printf("Enter the number \n");
    scanf("%d",&iValue);

    printf("enter 1 st bit position\n");
    scanf("%d",iLocation1);

    printf("enter 2 nd bit position\n");
    scanf("%d",iLocation2);

    iRet = ToggalBits(iValue,iLocation1,iLocation2);

    printf("Updated number : %d \n",iRet);

    return 0;
}