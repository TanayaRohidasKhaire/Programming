#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr,int iSize,T iNo)
{
    int i=0,iStore=0;
    for(i=0;i<iSize;i++)
    {
        if(arr[i]==iNo)
        {
           return i ;
        }
        
    }
    
}

int main()
{
    int iRet=0;
    int arr[]={10,20,30,10,30,40,10,40,10};
    iRet=SearchFirst(arr,9,40);

    printf("%d",iRet);
    return 0;
}