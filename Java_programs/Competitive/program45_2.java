//Write java program to accept file name from user and open that file and 
//display the contents on screen

import java.util.*;
import java.io.*;

class program45_2
{
    public static void main(String A[])throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the file u want to open");

        String filename=sobj.nextLine();

        FileInputStream fobj = new FileInputStream(filename);

        System.out.println("File opned succesfully");

        System.out.println("conten of file : \n");

        int i =0;
        while((i =fobj.read())!= -1)
        {
            System.out.print((char)i);
        }



        fobj.close();
        sobj.close();

    }
}
