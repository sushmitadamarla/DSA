import java.util.Scanner;

public class challenge4 {
    public static void main(String args[])
    {
        //Even odd
        /*int n;
        System.out.println("Enter a number");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();

        if(n%2==0)
        {
            System.out.println("Even");
        }

        else
        {
            System.out.println("Odd");
        }*/

       // Young or old
       /*  int age;
        System.out.println("Enter age");
        Scanner sc= new Scanner(System.in);
        age=sc.nextInt();

        if(age>55)
        {
            System.out.println("Old");
        }

        else
        {
            System.out.println("Young");
        }*/

        int m1,m2,m3;
        System.out.println("Enter marks of 3 subjects");
        Scanner sc= new Scanner(System.in);
        m1=sc.nextInt();
        m2=sc.nextInt();
        m3=sc.nextInt();

        int total,avg;
        total=m1+m2+m3;
        avg= total/3;

        System.out.println("Total marks="+total+" Average marks="+avg);

        if (avg>=75)
        System.out.println("A");

        else if(avg>=60 && avg<75)
        System.out.println("B");

        else if(avg>=50 && avg<60)
        System.out.println("C");

        else if(avg>=40 && avg<50)
        System.out.println("D");

        else
        System.out.println("F");
    }
}
