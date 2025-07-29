import java.io.*;

class Student
{
    int rollno;
    String name,dept;
}

public class printstream {
    public static void main(String args[]) throws Exception
    {
        FileOutputStream fos = new FileOutputStream("Student1.txt");
        PrintStream ps = new PrintStream(fos);

        Student s = new Student();
        s.rollno = 10;
        s.name = "Kara";
        s.dept = "CSE";

        ps.println(s.rollno);
        ps.println(s.name);
        ps.println(s.dept);

        ps.close();
        fos.close();


        FileInputStream fis = new FileInputStream("Student1.txt");
        BufferedReader br = new BufferedReader(new InputStreamReader(fis));

        
        s.rollno = Integer.parseInt(br.readLine());
        s.name = br.readLine();
        s.dept = br.readLine();

        System.out.println("Roll no. "+s.rollno);
        System.out.println("Name: "+s.name);
        System.out.println("Department: "+s.dept);
    }
}
