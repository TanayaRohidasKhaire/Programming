
#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
        int *Arr ;
        int iSize;

        
        ArrayX(int X)
        {
            cout<<"inside constructor"<<endl;
            iSize = X;              //Charactristic initialization
            Arr=new int [iSize];    //Resource allocation

        }

        //Destructor
        ~ArrayX()
        {
            cout<<"inside distructor"<<endl;
            delete []Arr;           //Resource deallocation
        }
};

int main()
{
    ArrayX aobj1(5);    


    return 0;
}

