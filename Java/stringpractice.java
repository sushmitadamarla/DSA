public class stringpractice {
    public static void main(String args[])
    {
        String str1= new String("Schlond poofa");
        int len= str1.length();
        System.out.println(len);
        System.out.println(str1.toLowerCase());
        System.out.println(str1.toUpperCase());

        String str2= new String("      KinnPorsche      ");
        System.out.println(str2.trim());
        System.out.println(str1.substring(4));
        System.out.println(str1.substring(4,8));
        System.out.println(str1.replace("o","k"));

        System.out.println(str1.startsWith("Sc"));
        System.out.println(str1.endsWith("ofa"));
        System.out.println(str1.charAt(5));
        System.out.println(str1.indexOf("n"));
        System.out.println(str1.lastIndexOf("d"));
        
        String str3= new String("Mix");
        String str4= new String("Mix");
        System.out.println(str3.equals(str4));
        System.out.println(str3.equalsIgnoreCase(str4));
        System.out.println(str3==str4);
        System.out.println(str3.compareTo(str4));
        System.out.println(str1.contains("Schlond"));
        System.out.println(str1.concat(str3));
        System.out.println(str1+str3);

    }
}
