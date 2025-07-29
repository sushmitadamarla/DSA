public class Challenge2 {
    public static void main(String args[])
    {
        //Finding if a no. is binary or not
        int b= 110010101;
        String str= b+"";
        System.out.println(str.matches("[01]*"));

        float h= 1036F;
        String str1= h+"";
        System.out.println(str1.matches("[0-9] [A-F]*"));
    }
}
