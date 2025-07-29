#include <iostream>

using namespace std;

int main()
{
    int a,*p1,**p2;
    a=10;
    p1=&a;
    p2=&p1;

    cout<<"a="<<a<<endl;
    cout<<"*p1="<<*p1<<endl;
    cout<<"p1="<<p1<<endl;
    cout<<"**p2="<<**p2<<endl;
    cout<<"p2="<<p2<<endl;

    return 0;
}
