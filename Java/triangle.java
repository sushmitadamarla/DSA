import java.util.Scanner;

public class triangle {
   public static void main(String args[])
   {
      int a,b,c;
      float s;
      double area;
      System.out.println("Enter 3 sides of Triangle ");
      Scanner sc= new Scanner (System.in);
      a=sc.nextInt();
      b=sc.nextInt();
      c=sc.nextInt();

      s=(a+b+c)/2f;
      System.out.println("Semiperimeter="+s);

      area=Math.sqrt (s*(s-a)*(s-b)*(s-c));
      System.out.println("Area of Traingle="+area);
   } 
}
