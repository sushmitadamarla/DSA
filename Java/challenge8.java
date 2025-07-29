import java.util.Scanner;

public class challenge8 {
    public static void main(String args[])
    {
        System.out.println("------MENU------");
        System.out.println("ADD");
        System.out.println("SUBTRACT");
        System.out.println("MULTIPLY");
        System.out.println("DIVIDE");
        int a,b;
        System.out.println("Enter 2 nos.");
        Scanner sc= new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        sc.nextLine();
        System.out.println("Enter option in words");
        String option=sc.nextLine();

        switch(option)
        {
            case "ADD":
            System.out.println("Addition="+(a+b));
            break;

            case "SUB":
            System.out.println("Subtraction="+(a-b));
            break;

            case "MULTIPLY":
            System.out.println("Multiplication="+(a*b));
            break;

            case "DIVIDE":
            System.out.println("Division="+(a/b));
            break;

            default:
            System.out.println("Invalid input");
            break;
        }
    }
}
