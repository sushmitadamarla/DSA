#include <iostream>

using namespace std;

class A
{
    public:
    int a;

    A()
    {
        a=10;
        cout<<a<<endl;
    }
};

class B: public virtual A
{

};

class C: public virtual A
{

};

class D:public B, public C
{

};

int main()
{
    D obj;

    return 0;
}
