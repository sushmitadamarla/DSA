class thread1 implements Runnable
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

public class runnable {
    public static void main(String args[])
    {
        thread1 t = new thread1();
        Thread th = new Thread(t);

        th.start();

        int i=1;
        while(true)
        {
            System.out.println(i+"World");
            i++;
        }
    }   
}
