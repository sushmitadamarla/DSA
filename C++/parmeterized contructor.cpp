#include<iostream>

using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:

    Rectangle(int x, int y)
    {
        length=x;
        breadth=y;
    }

    void area()
    {
        int a;
        a=length*breadth;

        cout<<"Area of Rectangle:"<<a<<endl;
    }
};

int main()
{
    Rectangle r(45,98);
    r.area();

    return 0;
}
