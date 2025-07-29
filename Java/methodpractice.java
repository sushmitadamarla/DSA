public class methodpractice {
    /*static int max (int x,int y)
    {
        if(x>y)
        return x;
        else
        return y;
    }

    public static void main(String args[])
    {
        /*int a, b;
        a=12;
        b=98;

       /*  int c;
        c=max(a,b);
        System.out.println("Greatest element:"+c);

        //Object creation in Java
        methodpractice mp= new methodpractice();
        System.out.println(max(a,b));

        int A[]={2,4,6,8,10};
        update(A);
        System.out.println(A[0]);
    }

    static void update(int A[])
    {
        A[0]=25;
    }*/

   /*  static void change(int A[],int index,int value)
    {
        A[index]=value;
    }

    public static void main(String args[])
    {
        int A[]={2,4,6,8,10};
        change(A,3,85);

        for(int i=0;i<A.length;i++)
        System.out.println(A[i]);
    }*/

   /*  static int max(int x,int y)
    {
        if(x>y)
        return x;
        else
        return y;
    }
    static float max(float x,float y)
    {
        if(x>y)
        return x;
        else
        return y;
    }

    public static void main(String args[])
    {
        System.out.println(max(3.2f,4.8f));
    }*/

    //Variable arguments (varargs)

    static void show(int start,String ... x)
    {
        for(int i=0;i<x.length;i++)
        {
        System.out.println(start+". "+x[i]);
        start++;
        }
    }

    public static void main(String args[])
    {
        show(5,"Jake","Smith","Ajay","Vijay","Kit");
    }
}
