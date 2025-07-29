import java.util.Scanner;

public class challenge10 {
     public static void main(String args[])
     {
        //Arithmetic Progression
        /*int a,d,n;
        System.out.println("Enter first term");
        Scanner sc= new Scanner(System.in);
        a=sc.nextInt();
        System.out.println("Enter d");
        d=sc.nextInt();
        System.out.println("Enter n");
        n=sc.nextInt();
        
        int term=a;
        for(int i=0;i<=n;i++)
        {
            System.out.println(term);
            term=term+d;
        }*/

        //Geometric progression
        /*int a,r,n;
        System.out.println("Enter a,r,n");
        Scanner sc= new Scanner(System.in);
        a=sc.nextInt();
        r=sc.nextInt();
        n=sc.nextInt();

        int term=a;
        for(int i=0;i<=n;i++)
        {
            System.out.println(term);
            term=term*r;
        }*/

        //Fibonacci series
        int a=0,b=1,c,n;
        System.out.println("Enter no. of terms:");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();

        for(int i=0;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            System.out.println(c);
        }
     }    
}
