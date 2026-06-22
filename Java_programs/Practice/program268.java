import java.util.*;

class StringX
{
    public Void Display (String str)
    {
        System.out.println("Recived String is :"+str);
    }    
}

class program268
{
        public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str= null;

        program280 strobj = new program280();

        System.out.println("Enter string :");
        str = sobj.nextLine();

        strobj.Display(str);

    }
}