#include <iostream>

using namespace std;

class A
{
public:
    int a;
    void get()
    {
        cout<<"ENter value of a"<<endl;
        cin>>a;
    }
    void put()
    {
        cout<<"Value of a is"<<a<<endl;
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
        cout<<"Value of b:"<<b<<endl;
    }
};

class C
{
public:
    int c;

    void get2()
    {
        cout<<"Enter value of c"<<endl;
        cin>>c;
    }
    void put2()
    {
        cout<<"Value of c:"<<c<<endl;
    }
};

class D:public B,public C
{
public:
    int d,e;
    void get3()
    {
        cout<<"Enter value of d"<<endl;
        cin>>d;
    }
    void put3()
    {
        cout<<"Value of d:"<<d<<endl;
    }

    void print()
    {
        e=a+b+c+d;
        cout<<"Addition of a,b,c,d="<<e<<endl;
    }
};

int main()
{
    D obj;
    obj.get();
    obj.put();
    obj.get1();
    obj.put1();
    obj.get2();
    obj.put2();
    obj.get3();
    obj.put3();
    obj.print();

    return 0;

}
