
//Accept no from user and accept position toggal that position bit

# include<stdio.h>
typedef unsigned int UINT;

int main()
{
    UINT iNo =0;
    UINT iMask=0xFFFFFFF7; //0111 position 4
    UINT iPos=0; 

    printf("Enter number \n");
    scanf("%d",&iNo);

    iNo =iNo & iMask;

    printf("Updated number %d\n",iNo);

    return 0;
}