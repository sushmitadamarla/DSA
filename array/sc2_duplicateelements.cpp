#include<iostream>
using namespace std;

int main()
{
    int a[]={3,6,8,8,10,12,15,15,15,20};
    int last_duplicate = 0;
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i-1] && last_duplicate!=a[i])
        {
            cout<<a[i]<<",";
        }
        last_duplicate = a[i];
    }
    return 0;
}