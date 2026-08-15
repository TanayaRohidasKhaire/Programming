//Write java program to accept file name from user
//and creat new file of that name if it is not exitsing

import java.util.*;
import java.io.*;

class program45_4
{
    public static void main(String A[])throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the file u want to creat");
        String filename=sobj.nextLine();

        File fobj = new File(filename);

        if(fobj.createNewFile())
        {
            System.out.println("File gets succesfully created");
        }
        else
        {
            System.out.println("File not created");

        }


    }
}
