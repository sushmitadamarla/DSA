#include<iostream>

using namespace std;

int main()
{
    int a[] = {1,3,4,5,6,8,9,10,12,14};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 10;
    int i = 0;
    int j = n-1;

    while(i<j)
    {
        if(a[i] + a[j] == k)
        {
            cout<<a[i]<<"+"<<a[j]<<"="<<k<<endl;;
            i++;
            j--;
        }

        else if(a[i] + a[j] > k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return 0;
}