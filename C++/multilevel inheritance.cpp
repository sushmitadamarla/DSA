#include <iostream>

using namespace std;

class A
{
public:

    int a;
    void get()
    {
        cout<<"Enter value of a"<<endl;
        cin>>a;
    }

    void put()
    {
        cout<<"Value of a is:"<<a<<endl;
    }
};

class B:public A
{
public:
    int b;

    void get1()
    {
        cout<<"Enter value of b"<<endl;
        cin>>b;
    }

    void put1()
    {
        cout<<"value of b is:"<<b<<endl;
    }
};

class C:public B
{
public:
    int c,d;

    void get2()
    {
        cout<<"Enter value of c"<<endl;
        cin>>c;
    }
    void put2()
    {
        cout<<"Value of c is:"<<endl;
    }

    void print()
    {
        d=a+b+c;
        cout<<"Addition of a,b,c, is:"<<d<<endl;
    }
};

int main()
{
    C obj;
    obj.get();
    obj.put();
    obj.get1();
    obj.put1();
    obj.get2();
    obj.put2();
    obj.print();

    return 0;
}
