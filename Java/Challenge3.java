public class Challenge3 {
    public static void main(String args[])
    {
        String str="a!b@c#1$2%3";
        System.out.println(str.replaceAll("[^a-z A-Z 0-9]*", ""));

        String str1= "abc    def    ghi    jk";
        System.out.println(str1.replaceAll("    "," "));
    }
}
