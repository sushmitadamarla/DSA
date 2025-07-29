import java.util.Scanner;

public class cuboid {
    public static void main(String args[])
    {
        int l,b,h;
        int area,volume;
        System.out.println("Enter Length, Breadth, height of Cuboid");
        Scanner sc= new Scanner (System.in);
        l=sc.nextInt();
        b=sc.nextInt();
        h=sc.nextInt();
        area=2*((l*b)+(b*h)+(h*l));
        System.out.println("Area of cuboid="+area);
        volume= l*b*h;
        System.out.println("Volume of Cuboid="+volume);
    }
}
