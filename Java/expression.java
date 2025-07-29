public class expression {
    public static void main(String args[])
    {
        String str1= new String("#");
        System.out.println(str1.matches("."));

        String str2= new String("abc");
        System.out.println(str2.matches("[abc]"));
        System.out.println(str2.matches("[^abc]"));

        String str3= new String("a6");
        System.out.println(str3.matches("[a-z][0-9]"));
        
    }
}
