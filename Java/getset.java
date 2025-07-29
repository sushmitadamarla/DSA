class cylinder{
    private int radius;
    private int height;

    public cylinder()
    {
        radius=height=1;
    }

    public cylinder(int r,int h)
    {
        r=radius;
        h=height;
    }

    public int getRadius()
    {
        return radius;
    }

    public int getHeight()
    {
        return height;
    }

    public void setRadius(int r)
    {
        if(r>=0)
        radius=r;
        else
        radius=0;
    }

    public void setHeight(int h)
    {
        if(h>=0)
        height=h;
        else
        height=0;
    }

   /*  public void setDimensions(int r,int h)
    {
        height=h;
        radius=r;
    }*/

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

public class getset {
    public static void main(String args[])
    {
        cylinder c= new cylinder();
        c.setRadius(37);
        c.setHeight(68);
        System.out.println("Area of lid="+c.lidarea());
        System.out.println("Total Surface Area="+c.tsa());
        System.out.println("Volume="+c.volume());
    }
}
