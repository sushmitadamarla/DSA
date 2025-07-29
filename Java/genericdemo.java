public class genericdemo<T> {

    T data[] = (T[]) new Object[3];
    public static void main(String args[])
    {
        genericdemo<String> gd = new genericdemo();

        gd.data[0] = "hi";
        gd.data[1] = "bye";
       // gd.data[2] = new Integer(10);

       String str = gd.data[0];
    }
}
