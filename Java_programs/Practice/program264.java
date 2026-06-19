import java .util.*;

class program264 
{
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner (System.in);
        String Arr = null;  //ARR reference

        System.out.println("Enter string :");
        Arr = sobj.nextLine();

        System.out.println("Length of string is: "+Arr.length());

        int i=0;
        for (i=0;i<Arr.length();i++)
        {
            System.out.println(Arr.charAt(i));      //charAt is heavy as if it take 200 charactes then it will call 200 times
        }
        
    }
}