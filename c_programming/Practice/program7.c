#include<stdio.h>

int main()
{ 
    float fValue1=0.0f;                    //To Store First Number                
    float fValue2=0.0f;                    //To Store First Number
    float fResult=0.0f;                    //To store result

    
    printf("Enter First number:\n");            
    scanf("%f",&fValue1);

    printf("Enter second number:\n");           
    scanf("%f",&fValue2);

    fResult= fValue1+fValue2;               //perfoem the addirion

    printf("Addition is:%f\n",fResult);
    
    return 0;
}