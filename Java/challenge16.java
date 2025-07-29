class rectangle
{
    public double length;
    public double breadth;

    public double area()
    {
        double area;
        area=length*breadth;
        return area;
    }

    public double peri()
    {
        double p;
        p=2*(length+breadth);
        return p;
    }
}

public class challenge16 {
    public static void main(String args[])
    {
        rectangle r= new rectangle();
        r.length=24;
        r.breadth=21;
        System.out.println("Area="+r.area());
        System.out.println("Perimeter="+r.peri());
    }
}
