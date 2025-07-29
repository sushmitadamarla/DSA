public class bitwise {
    public static void main(String args[])
    {
        int x=10,y=6,z1,z2,z3,z4;
        z1= x&y;
        z2= x|y;
        z3= x^y;
        z4= ~x;
        System.out.println(z1);
        System.out.println(z2);
        System.out.println(z3);
        System.out.println(z4);

        //Storing 2 values in a single variable

        byte a=9, b=12;
        byte c;

        c = (byte)(a<<4);
        c = (byte)(c|b);

        System.out.println((c&0b11110000)>>4);
        System.out.println((c&0b00001111));
    }
}