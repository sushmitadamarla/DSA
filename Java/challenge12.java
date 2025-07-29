import java.util.Scanner;

public class challenge12 {
    public static void main(String args[])
    {
        //Sum of all elements in an array

        /*int A[]={2,4,6,8,10};
        int sum=0;

        for(int i=0;i<A.length;i++)
        sum=sum+A[i];

        System.out.println(sum);*/

        //Searching for a specific element

        /*int A[]= {2,6,8,5,9,3};
        int key,i;
        System.out.println("Enter the element you want to search:");
        Scanner sc= new Scanner(System.in);
        key=sc.nextInt();

        for(i=0;i<A.length;i++);
        {
            if(key==A[i])
            {
                System.out.println("Element is at index:"+i);
                System.exit(0);
            }
        }
        System.out.println("Element cannot be found");*/

        // Finding Maximum element

        

        /*for(int i=0;i<A.length;i++)
        {
            if(A[i]>max);
            max=A[i];
        }

        System.out.println("Maximum element:"+max);*/
 
        //Finding 2nd largest element
         
        /*int A[]= {2,4,6,8,10};
        int max1,max2;
        max1=max2=A[0];
        for(int i=0;i<A.length;i++)
        {
            if(A[i]>max1)
            {
                max1=max2;
                max1=A[i];
            }

            else if (A[i]>max2) 
            max2=A[i];
        }
        System.out.println("Second Largest element:"+max2);*/
  
        //Rotating an array
        
        /*int A[] = {3,9,7,8,12,6,15,5,4,10,85};

        for (int x:A) {

            System.out.print(x+ ",");

        }

                    System.out.println("");



        int temp = A[0];

         for (int i = 1; i < A.length; i++) {

                System.out.print(A[i]+ ",");

            }

            A[A.length - 1] = temp;                           

            System.out.println(temp);*/

        //Inserting an element in the array

        /*int A[]= new int[10];
        A[0]=5;
        A[1]=9;
        A[2]=6;
        A[3]=10;
        A[4]=12;
        A[5]=7;

        int x=15;
        int n=6,index=2;

        for (int i=0;i<n;i++)
        System.out.print(A[i]+",");
        System.out.println("");

        for(int i=n;i>index;i--)
        {
            A[i]=A[i-1];
            A[index]=x;
        }

        for (int i=0;i<n;i++)
        System.out.print(A[i]+",");
        System.out.println("");*/

        //deleting elements

        /*int A[]= new int[10];
        A[0]=5;
        A[1]=9;
        A[2]=6;
        A[3]=10;
        A[4]=12;
        A[5]=7;

        for (int i=0;i<A.length;i++)
        System.out.print(A[i]+",");
        System.out.println("");

        for(int i=2;i<A.length-1;i++)
        A[i-1]=A[i];

        for (int i=0;i<A.length;i++)
        System.out.print(A[i]+",");
        System.out.println("");*/

        //Copying elements in another Array

       /*  int A[]={2,4,6,8,10,12,14,16,18,20};
        int B[]=new int[10];

        for (int i=0;i<A.length;i++)
        {
            B[i]=A[i];
        }
 
        for(int x:B)
        {
            System.out.print(x+",");
        }*/

        //Reverse an array

        int A[]={2,4,6,8,10,12,14,16,18,20};
        int B[]=new int[10];

        for(int i=A.length-1,j=0;i>=0;i--,j++)
        B[j]=A[i];

        for (int i=0;i<B.length;i++)
        System.out.print(B[i]+",");
        System.out.println("");

        System.out.println(A.length);
    }
}
