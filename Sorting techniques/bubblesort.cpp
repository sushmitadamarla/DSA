#include<iostream>
using namespace std;

class bubble
{
    public:

    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    void bubblesort(int A[],int n)
    {
        int i,j;

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(A[j]>A[j+1])
                swap(A[j], A[j+1]);
            }
        }
    }
};

int main()
{
    bubble b;
    int A[] = {0,3,4,5,45,95,7,2,64,47}, n= sizeof(A)/sizeof(A[0]);

    b.bubblesort(A,10);

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}