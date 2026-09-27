import java.util.*;
import java.io.*;

class Program45_5
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the directory name : ");
        String dirname = sobj.nextLine();

        File fobj = new File(dirname);

        String Arr[] = fobj.list();

        System.out.println("Files in the directory are : ");

        int iCount=0;
        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
            iCount++;
        }
        System.out.print(iCount);
        sobj.close();
    }
}