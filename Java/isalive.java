public class isalive extends Thread{
    
    public void run()
    {
        System.out.println("Hello world");
    }

    public static void main(String args[])
    {
        isalive a = new isalive();
        isalive b = new isalive();

        a.start();
        System.out.println(a.isAlive());
        System.out.println(b.isAlive());
        b.start();
    }
}
