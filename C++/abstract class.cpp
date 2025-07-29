#include <iostream>

using namespace std;

class A
{
    int x;
public:
    virtual void fun()=0;

    int getx()
    {
     return x;
    }
};

class B: public A
{
public:
   // int y;

    void fun()
    {
        cout<<"fun() is called"<<endl;
    }
};

int main()
{
    B obj;
    obj.fun();

    return 0;
}

