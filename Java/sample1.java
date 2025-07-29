public class sample1 {
    int a=5;

    public int objectpara(sample1 s1)
    {
        int b;
        b = s1.a++;
        return b;
    }

    public static void main(String args[])
    {
        sample1 s2 = new sample1();
        System.out.println(s2.a);
        s2.objectpara(s2);
        System.out.println(s2.a);
    }
}
