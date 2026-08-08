//write the java program to accept the file name from user and open thst file
import java.util.*;
import java.io.*;

class program45_1
{
    public static void main(String A[])throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the file u want to open");

        String filename=sobj.nextLine();

        FileInputStream fobj = new FileInputStream(filename);

        System.out.println("File opned succesfully");

        fobj.close();
        sobj.close();

    }
}
