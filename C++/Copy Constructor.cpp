#include<iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:

    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }

    Rectangle(Rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }

    void display()
    {
         cout<<"Length="<<length<<endl;
        cout<<"Breadth="<<breadth<<endl;
    }
};

int main()
{
    Rectangle r1(34,78);
    r1.display();
    Rectangle r2(r1);
    r2.display();
    return 0;
}
