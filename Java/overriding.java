/*class Super
{
    public void display()
    {
        System.out.println("Super class display");
    }
}

class sub extends Super
{
    public void display()
    {
        System.out.println("Sub class display");
    }
}*/

//Overiding in television

class television
{
    public void switchON()
    {
        System.out.println("TV is switched on");
    }

    public void change_channel()
    {
        System.out.println("Channel changed");
    }

    public void change_volume()
    {
        System.out.println("Volume is changed");
    }
}


class SmartTV extends television
{
    public void switchON()
    {
        System.out.println("SmartTV is switched on");
    }

    public void change_channel()
    {
        System.out.println("Channel changed in Smart Tv");
    }

    public void change_volume()
    {
        System.out.println("Volume is changed in smart TV");
    }

    public void browse()
    {
        System.out.println("Browsing in Smart TV");
    }
}

public class overriding {
    public static void main(String args[])
    {
        /*Super sp= new sub();
        sp.display();
        sub s= new sub();
        s.display();*/

        SmartTV s= new SmartTV();
        s.switchON();
        s.change_channel();
        s.change_volume();
        s.browse();
    }
}
