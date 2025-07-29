public class wrapperclass {
    public static void main(String args[])
    {
        //Integer i = new Integer(10);
        Integer a = Integer.valueOf(10);
        Integer b = 10;

        Byte c = 15;
        Byte d = Byte.valueOf("15");
        byte bb = 15;
        Byte e = Byte.valueOf(bb);

        Short s = Short.valueOf("123");

        Float f = 12.3f;
     
        Float h = Float.valueOf("123.4");

        Double j = Double.valueOf(123.456);

        Character k = Character.valueOf('A');

        Boolean l = Boolean.valueOf("true");

        int m1 = 15;

        Integer m2 = Integer.valueOf("123");
        Integer m3 = Integer.valueOf("A7", 16);

        System.out.println(m3);

        Integer m4 = Integer.valueOf("1010", 2);
        System.out.println(m4);
    }
}
