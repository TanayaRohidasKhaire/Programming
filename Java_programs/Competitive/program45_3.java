//Write java program to accept the file name from user and openhat file
//open in write mode and write some data at thge end of file

import java.util.*;
import java.io.*;

class program45_3
{
    public static void main(String A[])throws IOException
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the file u want to open");

        String filename=sobj.nextLine();

        FileOutputStream fobj = new FileOutputStream(filename,true);

        System.out.println("File opned succesfully in write mode");

        System.out.println("write the content in file : ");
        String str = sobj.nextLine();
        byte Arr[] = str.getBytes();

        fobj.write(Arr);
        FileInputStream fiobj = new FileInputStream(filename);

int i;

while((i = fiobj.read()) != -1)
{
    System.out.print((char)i);
}

fiobj.close();

        System.out.println("Data written successfully.");
        


        fobj.close();
        sobj.close();

    }
}
