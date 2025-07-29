#include<iostream>

using namespace std;

int main()
{
    int n,t1=0,t2=1,next;

    cout<<"Enter no. of terms"<<endl;
    cin>>n;

    int i;

    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<t1<<endl;
        }
        else if(i==1)
        {
            cout<<t2<<endl;
        }
        else
        {
            next=t1+t2;
            t1=t2;
            t2=next;

            cout<<next<<endl;
        }
    }

    return 0;
}
