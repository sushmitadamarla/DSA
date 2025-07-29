class Subject
{
    private String subID;
    private String name;
    private int maxmarks;
    private int marksObtain;

    public Subject(String subID, String name)
    {
        this.subID = subID;
        this.name = name;
    }

    public void setMaxMarks(int mm)
    {
        maxmarks = mm;
    }

    public void setmarksObtain(int mo)
    {
        marksObtain = mo;
    }

    public String getSubID()
    {
        return subID;
    }

    public String getName()
    {
        return name;
    }

    public int getMaxMarks()
    {
        return maxmarks;
    }

    public int getmarksObtain()
    {
        return marksObtain;
    }
}

public class challenge20 {
    public static void main(String args[])
    {

    }
}
