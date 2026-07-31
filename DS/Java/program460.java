//DoublyCL in java
class node 
{
    public int data;
    public node next;
    public node prev;

    node(int no)
    {
        this.data=no;
        this.next=null;
        this.prev=null;

    }

}

class DoublyCL
{
    private node first;
    private node last;
    private int iCount;

    DoublyCL()
    {
        this.first=null;
        this.last=null;
        this.iCount=0;
        
    }

    public void Display()
    {
        node temp =first;

        if(first==null && last ==null)
        {
            return;
        }
        System.out.print(" <- ");
        do
        {
            System.out.print("|"+temp.data+" | ->");
            temp=temp.next;

        }while(temp != first);

    }

    public int Count()
    {
        return iCount;
    }
    public void InsertFirst(int iNo)
    {
        node newn =new node(iNo);

        if(first ==null&&last==null)
        {
            first=newn;
            last = newn;
        }
        else
        {
            newn.next=first;
            first.prev=newn;
            first=newn;
        }
        last.next=first;
        first.prev=last;
        iCount++;
    }

    public void InsertLast(int iNo)
    {
        node newn =new node(iNo);

        if(first ==null&&last==null)
        {
            first=newn;
            last = newn;
        }
        else
        {
            newn.prev =last;
            last.next=newn;
            last=newn;
            
        }
        last.next=first;
        first.prev=last;
        iCount++;
    }

    public void InsertAtPos(int iNo,int iPos)
    {
        
        if((iPos <1)||(iPos>iCount+1))
            {
                System.out.println("Invalid position");
                return;
            }
            if(iPos==1)
            {
                InsertFirst(iNo);
            }
            else if(iPos== iCount+1)
            {
                InsertLast(iNo);
            }
            else
            {
                int i=0;
                node newn= new node(iNo);
                node temp=first;

                for(i=1;i<iPos-1;i++)
                {
                    temp=temp.next;
                }
                newn.next=temp.next;
                newn.prev=temp;
                temp.next.prev=newn;
                temp.next=newn;

                iCount++;

            }
    }

    public void DeleteFirst()
    {
        if(last==null && first==null)
        {
            return;
        }
        else if(first==last)
        {
            first = null;
            last=null;
        }
        else
        {
            first=first.next;

        }
        last.next=first;
        first.prev=last;
        iCount--;
    }

    public void DeleteLast()
    {
        if(last==null && first==null)
        {
            return;
        }
        else if(first==last)
        {
            first = null;
            last=null;
        }
        else
        {
            last =last.prev;
            
        }
        last.next=first;
        first.prev=last;
        iCount--;
    }

    public void DeleteAtPos(int iPos)
    {
        if((iPos <1)||(iPos>iCount))
        {
            System.out.println("Invalid position");
            return;
        }
        if(iPos==1)
        {
            DeleteFirst();
        }
        else if(iPos== iCount)
        {
            DeleteLast();
        }
        else
        {
            int i=0;
            node temp=first;
            for(i=1;i<iPos-1;i++)
            {
                temp=temp.next;
            }
            temp.next=temp.next.next;
            temp.next.prev=temp;
            iCount--;

        }
    
    }
}
public class program4
{
    public static void main(String A[])
    {
        DoublyCL sobj= new DoublyCL();
        int iRet=0;
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();

        iRet=sobj.Count();

        System.out.println("\nNumber of nodes are :"+iRet);

        sobj.DeleteFirst();
        sobj.DeleteLast();

        sobj.Display();
        iRet=sobj.Count();
        System.out.println("\nNumber of nodes are :"+iRet);

        sobj.InsertAtPos(105,4);
        sobj.Display();
        iRet=sobj.Count();
        System.out.println("\nNumber of nodes are :"+iRet);

        sobj.DeleteAtPos(4);
        sobj.Display();
        iRet=sobj.Count();
        System.out.println("\nNumber of nodes are :"+iRet);
        
        
    }
}