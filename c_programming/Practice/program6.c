/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        Perform Addition of no1 and no2
        Display the result
    STOP
*/

#include<stdio.h>

int main()
{ 
    //Variable Creation with Default values
    
    float i=0.0f, j=0.0f, k=0.0f;

    printf("Enter First number:\n");
    scanf("%f",&i);

    printf("Enter second number:\n");
    scanf("%f",&j);

    k=i+j;

    printf("Addition is:%f\n",k);
    
    return 0;
}