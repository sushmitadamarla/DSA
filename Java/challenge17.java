class Cylinder
{
    public double radius,height;

    public double lidarea()
    {
        double lidarea;
        lidarea=2*2*Math.PI*radius;
        return lidarea;
    }

    public double tsa()
    {
        double tsa;
        tsa= 2*Math.PI*radius*(height+radius);
        return tsa;
    }

    public double volume()
    {
        double volume;
        volume=Math.PI*radius*radius*height;
        return volume;
    }
}

public class challenge17 {
    public static void main(String args[])
    {
        Cylinder c= new Cylinder();
        c.radius=687989.838298;
        c.height=687.093739045;
        System.out.println("Area of lid="+c.lidarea());
        System.out.println("Total Surface Area="+c.tsa());
        System.out.println("Volume="+c.volume());
    }
}
