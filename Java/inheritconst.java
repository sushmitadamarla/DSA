class Parent
{
    public Parent()
    {
        System.out.println("Non Param of parent class");
    }

    public Parent(int x)
    {
        System.out.println("param of parent"+x);
    }
}

class child extends Parent
{
    public child()
    {
        System.out.println("non parem of child");
    }

    public child(int x,int y)
    {
        super(x);
        System.out.println("parem of child"+x+y);

    }
}
public class inheritconst {
    public static void main(String args[])
    {
        child c= new child(3,4);
    }
}
