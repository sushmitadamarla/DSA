import java.util.Scanner;

class cellphone
{
    private int phno;
    private String imie;
     public cellphone(int p, String i)
    {
        phno=p;
        imie=i;
    }
    

    public int getPhno()
    {
        return phno;
    }

    public String getImie()
    {
        return imie;
    }

    public void call()
    {
        System.out.println("Enter name of person you want to call:");
        String name= new String();
        Scanner sc= new Scanner(System.in);
        name= sc.nextLine();
        System.out.println("Calling "+name);
    }

    public void sms()
    {
        System.out.println("Enter name of person you want to text:");
        String name= new String();
        Scanner sc= new Scanner(System.in);
        name= sc.nextLine();
        System.out.println("Texting: "+name);
        String msg=new String();
        System.out.println("Enter your msg: ");
        msg= sc.nextLine();
        System.out.println("Sent!!!");
    }

    public void Savecontact()
    {
        System.out.println("Enter no.you want to save: ");
        int contact;
        Scanner sc=new Scanner(System.in);
        contact=sc.nextInt();
        System.out.println("Contact saved!!!");
    }

    public void delcontact()
    {
        System.out.println("Enter no.you want to delete: ");
        int contact;
        Scanner sc=new Scanner(System.in);
        contact=sc.nextInt();
        System.out.println("Contact deleted!!!");
    }
}

class smartphone extends cellphone
{
    private int macno;
    public smartphone(int p, String i,int mac)
    {
        super(p,i);
        macno=mac;
    }

    public int getMacno()
    {
        return macno;
    }

    public void play()
    {
        System.out.println("Playing music!!");
    }

    public void click()
    {
        System.out.println("Photo clicked!!!");
    }

    public void capture()
    {
        System.out.println("Video Captured!!!");
    }
}

public class cellphone1 {
    public static void main(String args[])
    {
        smartphone sp= new smartphone(987654321, "8394gjbnv438", 583642098);
        System.out.println(sp.getPhno());
        System.out.println(sp.getImie());
        System.out.println(sp.getMacno());
        sp.call();
        sp.sms();
        sp.Savecontact();
        sp.delcontact();
        sp.play();
        sp.click();
        sp.capture();
    }
}
