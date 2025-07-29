#include<iostream>

using namespace std;

class Rectangle
{
private:
    int length,breadth;

public:
    Rectangle()
    {
        length=0;
        breadth=0;
    }

    void getlb()
    {
        cout<<"Enter Length"<<endl;
        cin>>length;
        cout<<"Enter breadth"<<endl;
        cin>>breadth;
    }

    void area()
    {
        int a;
        a=length*breadth;

        cout<<"Area is:"<<a<<endl;
    }
};

int main()
{
    Rectangle r;
    r.getlb();
    r.area();

    return 0;
}
