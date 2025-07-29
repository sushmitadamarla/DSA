#include <iostream>

using namespace std;

class Circle
{
private:
    double radius;
public:
    void getr();
    double area();
};

void Circle::getr()
{
    cout<<"Enter Radius"<<endl;
    cin>>radius;
}

double Circle::area()
{
    int a;
    a=3.14*radius*radius;
    cout<<"Area of circle is "<<a<<endl;
    return a;
}

int main()
{
    Circle c;
    c.getr();
    c.area();

    return 0;
}
