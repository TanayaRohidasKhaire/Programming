

# include<stdio.h>
typedef unsigned int UINT;

int main()
{
    UINT iNo =0;
    UINT iMask=0xFFBFFFFF; //   1111   1111    1011    1111    1111    1111    1111    1111   position 23
    UINT iPos=0; 

    printf("Enter number \n");
    scanf("%d",&iNo);

    iNo =iNo & iMask;

    printf("Updated number %d\n",iNo);

    return 0;
}