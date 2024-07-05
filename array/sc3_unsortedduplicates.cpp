#include<iostream>

using namespace std;

int main()
{
    int a[] = {8,3,6,4,6,5,6,8,2,7};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=-1)
        {
        int count=1;
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=-1;
            }
        }
        if(count>1)
        cout<<a[i]<<","<<count<<",";
        }
    }
    return 0;
}