public class challenge15 {
    /*static int max(int...a)
    {
        if(a.length==0)
        return Integer.MIN_VALUE;
        
        int m=a[0];
        for(int i=0;i<a.length;i++)
        {
            if(m<a[i])
            m=a[i];
        }
        return m;
    }

    public static void main(String args[])
    {
        System.out.println(max(10,20,30,40,50,60,90));
    }*/

    //finding sum of all elements

    static int add(int...a)
    {
        int sum=0;
        for(int i=0;i<a.length;i++)
        sum=sum+a[i];

        return sum;
    }

    public static void main(String args[])
    {
        System.out.println(add(10,20,30,40,50,60,70,80,90));
    }
}
