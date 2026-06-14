#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *Brr = NULL;
    int iLength=0,iCnt=0;

    // step 1: Accept the number of elements

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //step 2: Allocate the memory
    Brr = (int*)malloc(iLength * sizeof(int));

    //step 3: accept the value from user
    printf("enetr the elements");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);

    }

    //step 4 :use the memory (LOGIC)


    //step 5: dealocate the memory
    free(Brr);


    return 0;
}