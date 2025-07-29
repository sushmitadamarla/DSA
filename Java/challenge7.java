import java.util.Scanner;

public class challenge7 {
    public static void main(String args[])
    {
        /*int day;
        System.out.println("Enter a no. from 1-7");
        Scanner sc= new Scanner(System.in);
        day= sc.nextInt();

        switch(day)
        {
            case 1:
            System.out.println("Monday");
            break;

            case 2:
            System.out.println("Tuesday");
            break;

            case 3:
            System.out.println("Wednesday");
            break;

            case 4:
            System.out.println("Thursday");
            break;

            case 5:
            System.out.println("Friday");
            break;

            case 6:
            System.out.println("Saturday");
            break;

            case 7:
            System.out.println("Sunday");
            break;

            default:
            System.out.println("Invalid input");
        }*/

        /*int month;
        System.out.println("Enter a no. from 1-12");
        Scanner sc= new Scanner(System.in);
        month= sc.nextInt();

        switch(month)
        {
            case 1:
            System.out.println("Jan");
            break;

            case 2:
            System.out.println("Feb");
            break;

            case 3:
            System.out.println("Mar");
            break;

            case 4:
            System.out.println("Apr");
            break;

            case 5:
            System.out.println("May");
            break;

            case 6:
            System.out.println("Jun");
            break;

            case 7:
            System.out.println("Jul");
            break;

            case 8:
            System.out.println("Aug");
            break;

            case 9:
            System.out.println("Sep");
            break;

            case 10:
            System.out.println("Oct");
            break;

            case 11:
            System.out.println("Nov");
            break;

            case 12:
            System.out.println("Dec");
            break;

            default:
            System.out.println("Invalid input");
        }*/

        String domain= "https:/www.google.com";
        String ext= domain.substring(domain.lastIndexOf("."));

        switch(ext)
        {
            case "com":
            System.out.println("Commercial");

            case "org":
            System.out.println("Organisation");

            case "net":
            System.out.println("Network");
        }
    }
}
