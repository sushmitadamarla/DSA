#include<iostream>
using namespace std;

class Count
{
    public:
int findMax(int A[],int n)
{
    int max = INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
        {max = A[i];}
    }
    return max;
}
void countsort(int A[], int n)
{
    int i,j,max,*c;
    max = findMax(A,n);

    c = new int[max+1]();
    for(int i=0;i<max+1;i++)
    {
        c[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        c[A[i]]++;
    }
    i=0;j=0;

    while(j<max+1)
    {
        if(c[j]>0)
        {
            A[i++] = j;
            c[j]--;
        }
        else
        j++;
    }
}
};

int main()
{
    int A[] = {0,3,4,5,45,95,7,2,64,47}, n= sizeof(A)/sizeof(A[0]);

     Count c;
     c.countsort(A,n);

    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}