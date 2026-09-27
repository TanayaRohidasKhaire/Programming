//Write java program to accept two file names from user and open first file and create new file (Second name) 
//and copy the data from first file into newly created file.
import java.util.*;
import java.io.*;

class Program46_1
{
    public static void main(String A[])throws IOException
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter source file name : ");
        String Source = sobj.nextLine();

        System.out.println("Enter destination file name : ");
        String Destination = sobj.nextLine();

        FileInputStream fiobj = new FileInputStream(Source);
        FileOutputStream foobj = new FileOutputStream(Destination);

        byte[] Buffer = new byte[1024];
        int iRet = 0;

        while((iRet = fiobj.read(Buffer)) != -1)
        {
            foobj.write(Buffer, 0, iRet);
        }
        fiobj.close();
        foobj.close();
        sobj.close();
}
}