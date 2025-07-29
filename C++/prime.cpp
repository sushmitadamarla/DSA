#include <iostream>

using namespace std;

int prime(int n)
{
    int i;
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
}

    int main()
    {
        int num,flag=0;

        cout<<"Enter a no."<<endl;
        cin>>num;

        flag=prime(num);

        if(flag==1)
        {
            cout<<"not a prime no"<<endl;
        }
        else
        {
            cout<<"prime no."<<endl;
        }


    return 0;
}
