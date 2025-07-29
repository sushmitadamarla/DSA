public class challenge13 {

    //prime number
       /*  static boolean isprime(int n)
        {
            for(int i=2;i<n/2;i++)
            {
                if(n%i==0)
                return false;
            }
            return true;
        }
    

    public static void main(String args[])
    {
        System.out.println(isprime(19));
    }*/

    //GCD of 2 numbers

    /*static int gcd(int m,int n)
    {
        while(m!=n)
        {
            if(m>n)
            m=m-n;

            else
            n=n-m;
        }
        return m;
    }

    public static void main(String args[])
    {
        System.out.println(gcd(15,25));
    }*/

    //max element in an array

    int max(int A[])
    {
        int maxele=A[0];
        for (int i=0;i<A.length;i++)
        {
            if(A[i]>maxele)
            A[i]=maxele;
        }
        return A[i];
    }

    public static void main(String args[])
    {
        int A[]={2,4,6,8,10,12,14,16,18,20};
        System.out.println(max(A[]));
    }
}
