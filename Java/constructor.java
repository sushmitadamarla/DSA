class rectangle{
    public int length,breadth;

   public rectangle()
   {
       length=1;
       breadth=1;
   }

   public rectangle(int l,int b)
   {
    length=l;
    breadth=b;
   }

   public rectangle(int s)
   {
    length=breadth=s;
   }

}

public class constructor {
    public static void main(String args[])
    {
        rectangle r= new rectangle(5,10);
    }
}
