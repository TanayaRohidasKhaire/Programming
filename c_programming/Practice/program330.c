
//Accept no from user and toggal 4th bit

# include<stdio.h>
typedef unsigned int UINT;

int main()
{
    UINT iNo =0;
    UINT iMask=0;

    printf("Enter number \n");
    scanf("%d",&iNo);

    iMask =0X00000008;//4

    iNo =iNo^ iMask;

    printf("Updated number %d\n",iNo);

    return 0;
}