#include<iostream>

using namespace std;

void sum(int *x,int *y)
{
    int c;
    c=*x+*y;
    cout<<"Addition is:"<<c<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter 2 nos"<<endl;
    cin>>a;
    cin>>b;
    sum(&a,&b);
    return 0;
}
