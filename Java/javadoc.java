/** 
 * @author Sushmita Damarla
 * @version 1.5
 * @since 2024**/


/**
 * 
 */
class A
{
    int a;
    String s;
   A()
   {
    /**
     * @value 10 default value
     */
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


public class javadoc {
    public static void main(String args[])
    {
        A obj1 = new A();
        A obj2 = new A(obj1);
    }
}
