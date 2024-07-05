#include<iostream>
using namespace std;

class heap
{
    public:

    void insert(int A[],int n)
    {
        int i = n, temp;
        temp = A[i];

        while(i>1 && temp>A[i/2])
        {
            A[i] = A[i/2];
            i = i/2;
        }
        A[i] = temp;
    }

    int del(int A[], int n)
    {
        int i,j,x,val;
        val = A[1];
        x = A[n];
        A[1] = A[n];

        i = 1, j = i*2;

        while(j<n-1)
        {
            if(A[j+1]>A[j])
            {j = j+1;}
            if(A[i]<A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
                i = j;
                j = 2*j;
            }
        }
        A[n] = val;
        return val;
    }
};

int main()
{
    heap h;
    int A[] = {0,2,5,8,9,4,10,7};
    for(int i=2;i<7;i++)
    {
        h.insert(A,i);
    }

    cout<<"Deleted value is: "<<h.del(A,4);
    cout<<endl;

    for(int i=1;i<7;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}