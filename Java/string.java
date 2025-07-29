public class string {
    public static void main(String args[])
    {
        String str1= "Hello World!!!";
        String str2= new String("This is Java program");

        char c[]= {'H','e','l','l','o'};
        String str3= new String(c);

        byte b[]={65,66,67,68};
        String str4= new String(b);

        System.out.println(str1);
        System.out.println(str2);
        System.out.println(str3);
        System.out.println(str4);
    }
}
