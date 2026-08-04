#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int iNo;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;
    
    public:
        SinglyCL();

};

SinglyCL :: SinglyCL()
{
    this -> first= NULL;
    this -> last= NULL;
    this -> iCount=0;

}
int main()
{
    SinglyCL sobj;
    return 0;
}
