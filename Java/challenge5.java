import java.util.Scanner;

public class challenge5 {
    public static void main(String args[])
    {
       /*  String str= "2A9B784";

        if(str.matches("[01]*"))
        System.out.println("Binary");

        else if(str.matches("[0-9 A-F]*"))
        System.out.println("Hexadecimal");

        else if(str.matches("[0-9]*"))
        System.out.println("Decimal");

        else if(str.matches("[0-7]*"))
        System.out.println("Octal");

        else
        System.out.println("String is invalid");*/

        //To find if a year is leap tear or not

        int y;
        System.out.println("Enter a year");
        Scanner sc= new Scanner(System.in);
        y=sc.nextInt();
        System.out.println("Year="+y);

        if(y%4==0)
        {
            if(y%100==0)
            {
                if(y%400==0)
                {
                System.out.println("It is a leap year");
                }
                else
                System.out.println("It is not a leap year");
            }
            else
            System.out.println("It is not a leap year");
        }
        else
        System.out.println("It is not a leap year");
    }

}
