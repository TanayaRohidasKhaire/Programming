#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;      // $
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        DoublyLL();

        void Display();

        int Count();

        void InsertFirst(int iNo);

        void InsertLast(int iNo);

        void InsertAtPos(int iNo, int iPos);

        void DeleteFirst();

        void DeleteLast();

        void DeleteAtPos(int iPos);

};

DoublyLL :: DoublyLL()
{
    cout<<"Inside Constructor\n";
    this->first = NULL;  
    this->iCount = 0;
}

void DoublyLL :: Display()
{
    PNODE temp = NULL;
    temp = this ->first;
    printf("\nNULL <=> ");

    while (temp != NULL)
    {
        printf("| %d | <=> ",temp->data);
        temp = temp -> next;
    }

    printf("NULL\n");
}

int  DoublyLL :: Count()
{
    return this->iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
    PNODE newn= NULL;

    newn = new NODE;

    newn ->data= iNo;
    newn -> next = NULL;
    newn -> prev = NULL;                //$

    if(this ->first == NULL)
    {
        this ->first = newn;
    }
    else
    {
        newn -> next = this-> first ;
        this ->first ->prev = newn;                //$
        this->first = newn;

    }
    this ->iCount++;
}

void DoublyLL :: InsertLast(int iNo)
{
    PNODE newn= NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn ->data= iNo;
    newn -> next = NULL;
    newn -> prev = NULL;                //$

    if(this ->first == NULL)
    {
        this ->first = newn;
    }
    else
    {
        temp = this->first;
        while ( temp -> next != NULL)
        {
            temp = temp -> next;

        }
        temp -> next = newn;
        newn -> prev = temp;                //$
    

    }
    this ->iCount++;
}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{

    PNODE temp = NULL;
    int i =0;
    PNODE newn =NULL;

    newn = new NODE;

    newn -> data= iNo;
    newn -> next =NULL;
    newn -> prev = NULL;

    if((iPos<0)||(iPos>iCount+1))
    {
        cout<<"invalid position\n";
        return ;
    }

    if(iPos ==1)
    {
        this-> InsertFirst(iNo);
    }
    else if(iPos ==iCount+1)
    {
        this->InsertLast(iNo);
    }
    else
    {
        temp = this->first;
        for(i=1;i<iPos-1;i++)
        {
            temp=temp -> next;
        }
        newn->next = temp->next;
        newn->prev = temp;          // $
        temp->next->prev = newn;    // $
        temp->next = newn;

        iCount++;
    }
}

void DoublyLL :: DeleteFirst()
{

    if(this ->first == NULL)
    {
        return;
    }
    else if(this ->first -> next == NULL)
    {
        delete this -> first;
        first = NULL;
    }
    else
    {
       PNODE temp = NULL;

        temp = this->first;
        this->first = temp->next;
        this->first->prev = NULL;
        delete temp;
    }
    this->iCount--;
    
}

void DoublyLL :: DeleteLast()
{
    PNODE temp = NULL;

    if(this ->first == NULL)
    {
        return;
    }
    else if(first  -> next == NULL)
    {
        delete this -> first;
        first = NULL;
    }
    else
    {
        temp = this -> first;

        while(temp -> next->next !=NULL)
        {
            temp = temp -> next;
        }
        delete temp ->next;
        temp -> next = NULL;
        
    }
    this->iCount--;
    
}

void DoublyLL :: DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    int i =0;

    if((iPos<1)||(iPos>iCount))
    {
        cout<<"invalid position\n";
        return ;
    }

    if(iPos ==1)
    {
        this-> DeleteFirst();
    }
    else if(iPos ==iCount)
    {
        this->DeleteLast();
    }
    else
    {
        temp = first;

        for ( i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev ;         // $
        temp->next->prev = temp;        // $

        iCount--;
    }

}

int main()
{
    DoublyLL dobj;
    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPostion = 0;

    while (iChoice != 9)
    {
        cout<<"------------------------------------\n";
        cout<<"Enter your choice:\n";
        cout<<"------------------------------------\n";
        cout<<"1 : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at given position\n";
        cout<<"4 : Delete node at first position\n";
        cout<<"5 : Delete node at last position\n";
        cout<<"6 : Delete node at given position\n";
        cout<<"7 : Display the elements\n";
        cout<<"8 : count the number of elemets\n";
        cout<<"9 : Terminate the application\n";
        cout<<"------------------------------------\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value :\n";
                cin>>iValue;
                dobj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter the value :\n";
                cin>>iValue;
                dobj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter the value :\n";
                cin>>iValue;
                cout<<"Enter the position :\n";
                cin>>iPostion;
                dobj.InsertAtPos(iValue, iPostion);
                break;  
                
            case 4:
                dobj.DeleteFirst();
                break;

            case 5:
                dobj.DeleteLast();

            case 6:
                cout<<"Enter the position :\n";
                cin>>iPostion;
                dobj.DeleteAtPos(iPostion);
                break; 
                
            case 7:
                cout<<"Elemets of the linked List are :\n";
                dobj.Display();
                break;

            case 8:
                iRet = dobj.Count();
                cout<<"Number of elements are : "<<iRet<<"\n";

            case 9:
                cout<<"Thank you for using Marvellous Infosystem Application\n";
                break;

            default:
                cout<<"Invalid choice\n";
        }

    }




    return 0;
}