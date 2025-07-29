class circle
{
    public double radius;

    public double area()
    {
        double area;
        area=Math.PI*radius*radius;
        return area;
    }

    public double peri()
    {
        double p;
        p=2*Math.PI*radius;
        return p;
    }
}

public class circle1 {
    public static void main(String args[])
    {
        circle c1= new circle();
        c1.radius= 40;
        System.out.println("Area="+c1.area());
        System.out.println("Perimeter="+c1.peri());
    }
}
