abstract class Shape
{
    abstract public double perimeter();
    abstract public double area();
}

class circle extends Shape
{
    double radius;
    double peri;
    double area;

    public double perimeter()
    {
        peri = 2*Math.PI*radius;
        return peri;
    }

    public double area()
    {
        area = Math.PI*radius*radius;
        return area;
    }
}

class Rectangle extends Shape
{
    double length, breadth, peri, area;

    public double perimeter()
    {
        peri = 2*(length+breadth);
        return peri;
    }

    public double area()
    {
        area = length*breadth;
        return area;
    }
}

public class challenge21 {
    public static void main(String args[])
    {
        circle c = new circle();
        c.radius = 36.8;
        System.out.println("Perimeter of Circle= "+c.perimeter());
        System.out.println("Area of circle = "+ c.area());

        Rectangle r = new Rectangle();
        r.length = 15.2;
        r.breadth = 8.6;
        System.out.println("Perimeter of rectangle= "+r.perimeter());
        System.out.println("Area of Rectangle= "+r.area());
    }
}
