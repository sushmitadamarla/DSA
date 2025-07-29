#include <iostream>

using namespace std;

struct complex
{
    float real;
    float img;
};

int main()
{
    complex c1,c2,c3;
    cout<<"Enter 1st complex no"<<endl;
    cout<<"Enter real part"<<endl;
    cin>>c1.real;
    cout<<"Enter imaginary part"<<endl;
    cin>>c1.img;
    cout<<"Enter 2nd complex no."<<endl;
    cout<<"Enter real part"<<endl;
    cin>>c2.real;
    cout<<"Enter imaginary part"<<endl;
    cin>>c2.img;

    cout<<"first complex no:"<<c1.real<<"+"<<c1.img<<"i"<<endl;
    cout<<"Second complex no."<<c2.real<<"+"<<c2.img<<"i"<<endl;

    c3.real=c1.real*c2.real;
    c3.img=c1.img*c2.img;

    cout<<"multiplication is"<<c3.real<<"+"<<c3.img<<"i"<<endl;

    return 0;
}
