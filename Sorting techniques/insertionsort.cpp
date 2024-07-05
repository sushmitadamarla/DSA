#include<iostream>
using namespace std;

class insert
{
    public:

    void insertionsort(int A[], int n)
    {
        int i,j,x;

        for(i=1;i<n;i++)
        {
            j=i-1;
            x = A[i];
            while(j>-1 && A[j]>x)
            {
                A[j+1] = A[j];
                j--;
            }
            A[j+1] = x;
        }
    }
};

int main()
{
    insert i;
    int A[] = {0,3,4,5,45,95,7,2,64,47}, n= sizeof(A)/sizeof(A[0]);
    i.insertionsort(A,n);

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}