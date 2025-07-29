class A
{
    int a;
    String s;
   A()
   {
      a=10;
      s="Hello";
   } 

   A(A ref)
   {
      this.a=ref.a;
      this.s=ref.s;
      System.out.println(a+"  "+s);
   }
}

public class B
{
    public static void main(String args[])
    {
        A obj1 = new A();
        A obj2 = new A(obj1);
    }
}
