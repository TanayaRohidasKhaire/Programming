#include<stdio.h>

int main()
{
    int No1=0,No2=0,Ans=0;

    printf("Enter 1 st number\n");
    scanf("%d",&No1);

    printf("Enter 2 nd number\n");
    scanf("%d",&No2);

    Ans= No1 & No2;

    printf("Result is:%d\n",Ans);


    return 0;
}
