public class finally1 extends Exception{
    public static void main(String args[])
    { 
        try
        {
            System.out.println(10/0);
        }

        catch(ArithmeticException e)
        {
            System.out.println("Cannot divide by 0");
        }

        finally
        {
            System.out.println("Bye");             
        }
    }
}
