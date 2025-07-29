#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    float c,fa;
    cout<<"\nEnter temp in F:";
    cin>>fa;

    c=(fa- 32)/1.8;

    cout<<"Equivalent temp in C:"<<c<<endl;

    return 0;
}
