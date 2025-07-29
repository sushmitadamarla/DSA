interface A
{
    void meth1();
    void meth2();
}

class B implements A 
{
    public void meth1()
    {
        System.out.println("Meth1");
    }

    public void meth2()
    {
        System.out.println("Meth2");
    }

    public void meth3()
    {
        System.out.println("Meth3");
    }
}
public class interface1 {
   public static void main(String args[])
   {
    B b = new B();
    b.meth1();
    b.meth2();
   }
}
