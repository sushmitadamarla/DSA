#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int *p,*q;

    a=10;
    b=20;

    cout<<"Values before exchange"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    p=&a;
    q=&b;

    cout<<"Values after exchange"<<endl;
    cout<<"a="<<*q<<endl;
    cout<<"b="<<*p<<endl;

    return 0;
}
