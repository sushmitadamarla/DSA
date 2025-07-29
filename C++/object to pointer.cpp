#include <iostream>

using namespace std;

class Box
{
private:
    int l,b,h;

public:
    void getd()
    {
    cout<<"Enter l="<<endl;
    cin>>l;
    cout<<"Enter b="<<endl;
    cin>>b;
    cout<<"Enter h="<<endl;
    cin>>h;
    }

    void showd()
    {
        cout<<"l="<<l<<endl;
        cout<<"b="<<b<<endl;
        cout<<"h="<<h<<endl;
    }
};

int main()
{
    Box *p,obj;
    p=&obj;
    p->getd();
    p->showd();
    return 0;
}
