//Accept file name and calculate checksum of that file

import java.util.*;
import java.io.*;

class Program47_4
{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name : ");
        String FileName = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(FileName);

        int Checksum = 0;
        int i = 0;

        while((i = fiobj.read()) != -1)
        {
            Checksum = Checksum + i;
        }

        System.out.println("Checksum is : " + Checksum);

        fiobj.close();
        sobj.close();
    }
}

/*
ip: A B C
Checksum = 65 + 66 + 67 = 198

*/