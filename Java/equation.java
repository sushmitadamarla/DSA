import java.util.Scanner;

public class equation {
    public static void main(String args[])
    {
        int a,b,c;
        double r1,r2;
        System.out.println("Enter 3 nos.");
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        c=sc.nextInt();
        System.out.println("Equation is:"+a+"x^2+"+b+"x+"+c);
        r1=(-b+Math.sqrt(b*b-(4*a*c)))/(2*a);
        r2=(-b-Math.sqrt(b*b-(4*a*c)))/(2*a);
        System.out.println("Solutions are:"+r1+" "+r2);
    }
}
