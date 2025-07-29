interface MyLambda
{
    public void display(String str);
}

/*class My implements MyLambda
{
    public void display()
    {
        System.out.println("Hello World");
    }
}*/

public class lambdaexp {
    public static void main(String args[])
    {
        MyLambda m = (s) -> { System.out.println(s); };
        m.display("Hello World");
    }
}
