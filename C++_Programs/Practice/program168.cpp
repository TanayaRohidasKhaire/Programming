
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

        void Display()
        {
            int iCnt=0;
            cout<<"Elements of the arrray are: \n";

            for (iCnt)

        }
        void Accept()
        {
            

        }

            
};

int main()
{  
   ArrayX * aobj= NULL;
   int iLength =0;
   
   cout <<"enter the number of elements: \n";
   cin>>iLength;

   aobj = new ArrayX(iLength);
   aobj->Accept();
   aobj->Display();



    return 0;
}

