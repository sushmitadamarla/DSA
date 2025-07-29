class base
{
    base()
    {
        System.out.println("Non-param constructor of parent");
    }

    base(int x)
    {
        System.out.println("Param cons of parent"+x);
    }
}

class derived extends base
{
    derived()
    {
        System.out.println("Non param cons of child");
    }
    
    derived(int x, int y)
    {
        super(x);
        System.out.println("Param cons of child"+y);
    }
}

public class super1 {
    public static void main(String args[])
    {
        derived d = new derived(10,20);
        derived d1 = new derived();
    }
}
