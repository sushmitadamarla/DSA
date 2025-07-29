import java.util.Scanner;

class product
{
    private String itemno;
    private String name;
    private double price;
    private int qty;

    Scanner sc = new Scanner(System.in);
    public product(String itemno)
    {
        itemno = itemno;
    }

    public void setName()
    {
        System.out.println("Enter Name: ");
        name = sc.nextLine();
    }

    public void setPrice()
    {
        System.out.println("Enter Price: ");
        price = sc.nextDouble();
    }

    public void setQty()
    {
        System.out.println("Enter Quanty: ");
        qty = sc.nextInt();
    }

    public String getName()
    {
        return name;
    }    

    public double getPrice()
    {
        return price;
    }

    public int getQty()
    {
        return qty;
    }
}

public class challenge19 {
    public static void main(String args[])
    {

    }
}
