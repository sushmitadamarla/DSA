import java.io.*;

public class bytestream {
    public static void main(String args[]) throws Exception
    {
        /*byte b[] = {'a','b','c','d','e','f','g','h','i','j'};
        ByteArrayInputStream bis = new ByteArrayInputStream(b);

        String str = new String(bis.readAllBytes());
        System.out.println(str);
        System.out.println(bis.markSupported());
        bis.close();*/

        ByteArrayOutputStream bos = new ByteArrayOutputStream(20);

        bos.write('a');
        bos.write('b');
        bos.write('c');
        bos.write('d');

        byte b[] = bos.toByteArray();

        for(byte x:b)
        {
            System.out.println((char)x);
        }

        bos.close();
    }
}
