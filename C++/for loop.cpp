#include <iostream>

using namespace std;

int main()
{
    int n,i;
    int sum=0;
    cout<<"Enter a no."<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }

    cout<<"Addition is "<<sum<<endl;
    return 0;
}
