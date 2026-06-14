//////////////////////////////////////////////////////////////////////
//
// Include required header files
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Function Name : AddTwoNumbers
//  Input:          float,float
//  Output:         float
//  Description:    Performs addition of two 2 floats
//  Date:           08/05/2026
//  Author:         Tanaya Rohidas Khaire
//////////////////////////////////////////////////////////////////////

float AddTwoNumbers (
                        float fNo1,         //First input
                        float fNo2          //Second input
                    )
    {
        float fAns=0.0f;                    //Variable to store result
        fAns=fNo1+fNo2;                     //Perform Addition
        return fAns;
    }

//////////////////////////////////////////////////////////////////////
//
// Application two performaddition of two float values
//
//////////////////////////////////////////////////////////////////////
int main()
{ 
    float fValue1=0.0f;                    //To Store First Number                
    float fValue2=0.0f;                    //To Store First Number
    float fResult=0.0f;                    //To store result

    
    printf("Enter First number:\n");            
    scanf("%f",&fValue1);

    printf("Enter second number:\n");           
    scanf("%f",&fValue2);

    fResult= AddTwoNumbers(fValue1,fValue2);               

    printf("Addition is:%f\n",fResult);
    
    return 0;
}

//////////////////////////////////////////////////////////////////////
//
// Input:   10.0       11.0
// Output:  21.0      
//
//////////////////////////////////////////////////////////////////////