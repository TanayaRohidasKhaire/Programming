

# include<stdio.h>
typedef unsigned int UINT;

// position 21 & 27
  
int main()
{
    UINT iMask=0x04100000;
    UINT iNo =0; 
    UINT iResult =0;

     
    printf("enter number \n");
    scanf("%d",&iNo);

    iResult =iNo ^ iMask;

    printf("Updated number %d\n",iResult);


    return 0;
}