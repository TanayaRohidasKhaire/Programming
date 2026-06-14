
#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private :

        int *Arr ;
        int iSize;

    
    public :

        //parametrized constructor with default value
        ArrayX(int X=5)
            {
            
                iSize = X;              
                Arr=new int [iSize];    

            }

        
        ~ArrayX()
            {
            
                delete []Arr;          
            }
};

int main()
{  
   ArrayX * aobj1= new ArrayX();    //parametrized Constructor
   ArrayX * aobj2= new ArrayX(5);   //parametrized Constructor

   //(function call)
   

    delete aobj1;
    delete aobj2;



    return 0;
}

