class outer
{
    int x = 10;

    class Inner
    {
        int y = 20;
        
        public void innerdisplay()
        {
            System.out.println(x+" "+y);
        }
    }

    public void outerdisplay()
    {
        Inner i = new Inner();
        i.innerdisplay();
    }
}

public class nestedinner {
    public static void main(String args[])
    {
        //outer o = new outer();
        //o.outerdisplay();

        outer.Inner oi = new outer().new Inner();
        oi.innerdisplay();
    }
}
