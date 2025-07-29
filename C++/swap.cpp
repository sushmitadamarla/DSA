#include <iostream>

using namespace std;

int main()
{
    int a,b;

   cout<<"Enter 1st no."<<endl;
   cin>>a;
   cout<<"Enter 2nd no."<<endl;
   cin>>b;

   cout<<"Before swapping "<<a<<b<<endl;

   a=a+b;
   b=a-b;
   a=a-b;

   cout<<"After swapping "<<a<<b<<endl;
}
