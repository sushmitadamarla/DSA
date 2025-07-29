import java.util.Scanner;

public class challenge9 {
    public static void main(String args[])
    {
        //Displaying Multiplication table of 5
       /*  int i;
        for (i=0;i<=10;i++)
        {
            System.out.println("5 x "+i+" ="+(5*i));
        }*/
        
        //Displaying sum of n integers

       /*  int n,i,sum=0;
        System.out.println("Enter a number:");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        
        for(i=0;i<n;i++)
        {    sum=sum+i;
            System.out.println(sum);
        }*/

        //Factorial
        /*int i,n,fact=1;
        System.out.println("Enter a number:");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();

        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        System.out.println("Factorial of "+n+" is:"+fact);*/

        //Display digits

        /*int n,r;
        System.out.println("Enter a number");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        while(n>0)
        {
            r=n%10;
            n=n/10;
            System.out.println(r);
        }*/

        //Counting no. of digits
        /*int n,count=0;
        System.out.println("Enter a number");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();

        while(n>0)
        {
            n=n/10;
            count++;
        }
        System.out.println(count);*/

        //Armstrong number
        /*int m,n,r;
        System.out.println("Enter a number");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        m=n;
        int sum=0;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            sum=sum+r*r*r;
        }
        System.out.println(sum);
        if(sum==m)
        System.out.println("Armstrong number");
        else
        System.out.println("Not an Armstrong number");*/

        //Palindrome of a number
         /*int n,r,rev=0;
        System.out.println("Enter a no.");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        int m=n;

        while(n>0)
        {
            r=n%10;
            n=n/10;
            rev=rev*10+r;
        }
        System.out.println(rev);
        if(rev==m)
        {
            System.out.println("It is Palindrome");
        }
        else
        {
            System.out.println("It is not Palindrome");
        }*/

        //Display no.in words

        int n,r,i;
        String str="";
        System.out.println("Enter a no.");
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        

        while(n>0)
        {
            r=n%10;
            n=n/10;
            str=str+r;
        }
        System.out.println(str);

        char c;
        for(i=str.length()-1;i>=0;i--)
        {
            c=str.charAt(i);

            switch(c)
            {
                case '0':
                System.out.println("Zero ");
                break;

                case '1':
                System.out.println("One ");
                break;

                case '2':
                System.out.println("Two ");
                break;

                case '3':
                System.out.println("Three");
                break;

                case '4':
                System.out.println("Four");
                break;

                case '5':
                System.out.println("Five");
                break;

                case '6':
                System.out.println("Six ");
                break;

                case '7':
                System.out.println("Seven ");
                break;

                case '8':
                System.out.println("Eight ");
                break;

                case '9':
                System.out.println("Nine ");
                break;

                default:
                System.out.println("Invalid Entry");
                break;
            }
        }   
    }

}