#include<stdio.h>

//ERROR due to stddlib.h

int main()
{
    int *Brr = NULL;
    int iLength=0,iCnt=0;

    // step 1: Accept the number of elements

    printf("Enter number of elements : \n");
    sacnf("%d",&iLength);

    //step 2: Allocate the memory
    Brr = (int*)malloc(iLength * sizeof(int));

    //step 3: accept the value from user
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&Brr[iCnt]);

    }

    //step 4 :use the memory (LOGIC)


    //step 5: dealocate the memory
    free(Brr);


    return 0;
}