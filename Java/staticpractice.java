class Test
{
    static int x = 10;
    int y = 20;

    public void show()
    {
        System.out.println(x+" "+y);
    }

    static void display()
    {
        System.out.println(x);
    }
}

public class staticpractice {
    public static void main(String args[])
    {
        Test t = new Test();
        t.show();
    }
}
