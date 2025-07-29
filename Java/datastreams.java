import java.io.*;

class Student
{
    int rollno;
    String name;
    float avg;
    String dept;
}

public class datastreams {
    public static void main(String args[]) throws Exception
    {
        FileOutputStream fos = new FileOutputStream("Student2.txt");
        DataOutputStream dos = new DataOutputStream(fos);

        Student s = new Student();
        s.rollno = 10;
        s.name = "Kit";
        s.avg = 55.3f;
        s.dept = "CSE";

        dos.writeInt(s.rollno);
        dos.writeUTF(s.name);
        dos.writeFloat(s.avg);
        dos.writeUTF(s.dept);

        dos.close();
        fos.close();

        FileInputStream fis = new FileInputStream("Student2.txt");
        DataInputStream dis = new DataInputStream(fis);

        s.rollno = dis.readInt();
        s.name = dis.readUTF();
        s.avg = dis.readFloat();
        s.dept = dis.readUTF();

        System.out.println("Roll no:"+s.rollno);
        System.out.println("Name:"+s.name);
        System.out.println("Average:"+s.avg);
        System.out.println("Department:"+s.dept);

        dis.close();
        fis.close();
    }
}