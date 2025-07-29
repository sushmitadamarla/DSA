public class challenge1 {
    public static void main(String args[])
    {
        String str= "programmer@gmail.com";
        System.out.println(str.matches("[gmail]"));
        int i= str.indexOf("@");
        System.out.println(str.substring(0,i));
        System.out.println(str.substring(i+1,str.length()));
    }
}
