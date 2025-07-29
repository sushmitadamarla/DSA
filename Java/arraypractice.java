public class arraypractice {
    public static void main(String agrs[])
    {
        int A[]= new int[10];

        int B[]={2,4,6,8,10};
        int C[];
        C=new int[10];
        B[2]=15;

        for(int i=0;i<B.length;i++)
        System.out.println(B[i]);

        for (int x:B)
        System.out.println(x);

    }
}
