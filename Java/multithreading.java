class thread1 extends Thread
{
    public void run()
    {
        int i=1;
        while(true)
        {
            System.out.println(i+"Hello");
            i++;
        }
    }
}

public class multithreading {
    public static void main(String args[])
    {
        thread1 t = new thread1();
        t.start();
        
        int i=1;
        while(true)
        {
            System.out.println(i+"World");
            i++;
        }
    }
}
