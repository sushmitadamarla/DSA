#include <iostream>

using namespace std;

class Base
{
public:
    int a;
};

class Derived:public Base
{
public:
    int b;

    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main()
{
    Derived obj,*p;
    p=&obj;
    p->a=200;
    p->b=800;
    p->display();

    return 0;
}
