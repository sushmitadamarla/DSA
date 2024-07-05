#include<iostream>

using namespace std;

int main()
{
    int a[]= {6,7,9,11,12,15,16,17,18,19};
    int n = sizeof(a)/sizeof(a[0]);
  
      
    for(int i=0;i<n-1;i++)
    {
        int diff = a[i+1] - a[i];
        if(diff>1)
        {
            for(int j=1;j<diff;j++)
            {
                cout<<"Missing element:"<<a[i]+j<<" "<<endl;
            }
        }
    }
    return 0;
}