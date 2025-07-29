#include <iostream>
#include<stdio.h>

using namespace std;

class Student
{
private:
    int rollno;
    int marks;

public:

    void getDetails()
    {
      cout<<"Enter roll no."<<endl;
      cin>>rollno;
    }

    void setDetails()
    {
        //int m= marks;
      cout<<"Marks="<<endl;
      cin>>marks;

    }
};

int main()
{
    Student obj;
    obj.getDetails();
    obj.setDetails();

  return 0;
}
