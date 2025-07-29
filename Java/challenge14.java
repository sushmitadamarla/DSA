public class challenge14 {
    //Area

   /*  static int area(int l,int b)
    {
        int a;
        a= l*b;
        return a;
    }

    static double area(double radius)
    {
        double ar;
        ar=Math.PI*radius*radius;
        return ar;
    }

    public static void main(String args[])
    {
        System.out.println(area(4,27));
    }*/

    //reversing an array
    /*static int[] reverse(int A[])
    {
        int B[]=new int[5];
        for(int i=A.length-1,j=0;i>=0;i--,j++)
        B[j]=A[i];

        return B;
    }
    public static void main(String args[])
    {
        int A[]={2,4,6,8,10};
        System.out.println(reverse(A));
    }*/

    //Validate name and age

    static boolean validate(String name)
    {
        return name.matches("[a-zA-Z]");
    }

    static boolean validate(int age)
    {
        return age>=3 && age<=15;
    }

    public static void main(String args[])
    {
        System.out.println(validate("Ajay"));
        System.out.println(validate(12));
    }
}
