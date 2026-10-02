//Accept directory name and create that directory
import java.util.*;
import java.io.*;

class Program47_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String DirName = sobj.nextLine();

        File fobj = new File(DirName);

        if(fobj.mkdir())
        {
            System.out.println("Directory created successfully.");
        }
        else
        {
            System.out.println("Directory already exists or cannot be created.");
        }

        sobj.close();
    }
}