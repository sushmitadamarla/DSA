public class widenarrow {
    public static void main(String args[])
    {
        byte b = 10;
        short s = 10;
        int i = 10;
        long l = 10;
        float fl = 10.5f;
        double d = 10;
        char c = 10;
        boolean bl = true;

        b = (byte) s;
        System.out.println(b);

        s = (short) i;
        System.out.println(s);

        i = (int) fl;
        System.out.println(i);;
    }
}
