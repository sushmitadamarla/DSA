class Student
{
    public int roll,m1,m2,m3;
    public String name=new String();
    public String course=new String();

    public int total()
    {
        int total;
        total=m1+m2+m3;
        return total;
    }

    public int average()
    {
        int avg;
        avg=total()/3;
        return avg;
    }

    public char grade()
    {
        if(average()>60)
        return 'A';
        else
        return 'B';
    }
}

public class challenge18 {
    public static void main(String args[])
    {
        Student s= new Student();
        s.roll=47;
        s.name="Ajay";
        s.course="Computer engg.";
        s.m1=82;
        s.m2=90;
        s.m3=75;
         
        System.out.println("Name="+s.name);
        System.out.println("Roll no.="+s.roll);
        System.out.println("Course="+s.course);
        System.out.println("Marks in 3 subjects="+s.m1+" "+s.m2+" "+s.m3);
        System.out.println("Total="+s.total());
        System.out.println("Average="+s.average());
        System.out.println("Grade="+s.grade());
    }
}
