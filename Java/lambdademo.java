interface MyLambda
{
    public void display();
}

class Demo
{
    public void method1()
    {
        MyLambda ml = () ->{
            System.out.println("Hi");
            System.out.println("Bye");
        };

        ml.display();
    }
}

public class lambdademo {
    public static void main(String args[])
    {
        Demo d = new Demo();
        d.method1();
    }
}
