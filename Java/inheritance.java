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

class cylinder extends circle
{
    public double height;

    public double volume()
    {
        double volume;
        volume=area()*height;
        return volume;
    }
}

public class inheritance {
    public static void main(String args[])
    {
        cylinder c=new cylinder();
        c.radius=10;
        c.height=5;

        System.out.println("Area="+c.area());
        System.out.println("Volume="+c.volume());
    }
}
