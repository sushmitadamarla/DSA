import java.util.Scanner;

public class challenge6 {
    public static void main(String args[])
    {
        //To find the day of the week

       /*  int n;
        System.out.println("Enter a number between 1-7");
        Scanner sc= new Scanner(System.in);
        n= sc.nextInt();

        if(n==1)
        System.out.println("Monday");

        else if(n==2)
        System.out.println("Tuesday");

        else if(n==3)
        System.out.println("Wednesday");

        else if(n==4)
        System.out.println("Thursday");

        else if(n==5)
        System.out.println("Friday");

        else if(n==6)
        System.out.println("Saturday");

        else if(n==7)
        System.out.println("Sunday");

        else
        System.out.println("Invalid input");*/

        String url= "https://www.google.com";

        String protocol= url.substring(0, url.indexOf(":"));

        if(protocol== "http")
        System.out.println("Hypertext Transfer Protocol");

        else if(protocol== "ftp")
        System.out.println("file Transfer Protocol");


        String ext= url.substring(url.lastIndexOf("."));

        if(ext=="com")
        System.out.println("Commercial");

        else if(ext=="org")
        System.out.println("Organisation");

        else if(ext=="net")
        System.out.println("Network");
    }
}
