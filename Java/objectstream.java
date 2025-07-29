import java.io.*;

class Student implements Serializable
{
    private int rollno;
    private String name;
    private float avg;
    private String dept;
    public static int Data = 10;
    public transient int t;

    public Student(){}

    public Student(int r, String n, float a, String d)
    {
        rollno = r;
        name = n;
        avg = a;
        dept = d;
        Data = 500;
        t = 200;
    }

    public String toString()
    {
        return "\nStudent Details"+
        "\nRoll no:"+rollno+
        "\nName:"+name+
        "\nAverage:"+avg+
        "\nDept:"+dept+
        "\nData:"+Data+
        "\nTransient:"+t+"\n";
    }
}

public class objectstream {
    public static void main(String args[]) throws Exception
    {
        FileOutputStream fos = new FileOutputStream("Student3.txt");
        ObjectOutputStream oos = new ObjectOutputStream(fos);

        Student s = new Student(10, "Kara", 92.3f, "CSE");

        oos.writeObject(s);

        fos.close();
        oos.close();

        FileInputStream fis = new FileInputStream("Student3.txt");
        ObjectInputStream ois = new ObjectInputStream(fis);

        Student s1 = (Student)ois.readObject();

        System.out.println(s1);

        ois.close();
        fis.close();
    }
}
