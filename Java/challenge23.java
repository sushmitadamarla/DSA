import java.io.*;

public class challenge23 {
    public static void main(String args[]) throws Exception
    {
        FileInputStream fis = new FileInputStream("source1.txt");
        FileOutputStream fos = new FileOutputStream("source2.txt");

        int b;

        while((b = fis.read()) != 1)
        {
            if(b>=65 && b<=90)
                fos.write(b+32);
            else 
                fos.write(b);
        }

        fis.close();
        fos.close();
    }
}
