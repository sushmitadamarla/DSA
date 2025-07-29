public class sample {

    public int max(int x, int y)
        {
            if(x>y)
            return x;
            else
            return y;
        }

        public float max(float x, float y)
        {
            if(x>y)
            return x;
            else
            return y;
        }
    public static void main(String args[])
    {
        /*int a[];
        a = new int[] {2,4,6,8,10,12};
        System.out.println("value of a[4]="+a[4]);

        String s1 = "Hello";
        String s2 = "hello";
        String s3 = "";
        System.out.println(s1);
        System.out.println(s1.length());
        boolean str=s1.equals(s2);
        System.out.println(str);

        char charstr = s1.charAt(4);
        System.out.println(charstr);
        String substr=s1.substring(0,3);
        System.out.println(substr);
        
        boolean eqstr = s1.equalsIgnoreCase(s2);
        System.out.println(eqstr);

        System.out.println(s3.isEmpty());

        System.out.println(s1.concat(s2));
        String str3 = s1.replace('l','f');
        System.out.println(str3);

        String str4 = s1.toLowerCase();
        System.out.println(str4);

        String str5 = s2.toUpperCase();
        System.out.println(str5); */
        
        sample s = new sample();
        System.out.println(s.max(10,5));
        System.out.println(s.max(10.5f,5.4f));

    }
}

