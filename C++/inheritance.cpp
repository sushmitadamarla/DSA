#include<iostream>

using namespace std;

class Base
{
private:
    int pvt=1;

protected:
    int prot=2;

public:
    int pub=3;

    int getpvt()
    {
        return pvt;
    }
};

class derived:public Base
{
public:
    int getprot()
    {
        return prot;
    }
};

int main()
{
    derived obj;
    cout<<"\nPrivate:"<<obj.getpvt();
    cout<<"\nProtected"<<obj.getprot();
    cout<<"\nPublic"<<obj.pub;

    return 0;
}
