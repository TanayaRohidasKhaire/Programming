//Accept file name and check whether it is a regular file or not
import java.util.*;
import java.io.*;

class Program47_2
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        if(fobj.isFile())
        {
            System.out.println("It is a regular file.");
        }
        else
        {
            System.out.println("It is not a regular file.");
        }

        sobj.close();
    }
}