#include<iostream>
using namespace std;

class quick
{
    public:
    int i,j,k;

    void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    int partition(int A[],int l,int h)
    {
        int pivot=A[l];
        int i=l,j=h;

        do
        {
            do{i++;}while(A[i]<=pivot);
            do{j--;}while(A[j]>pivot);

            if(i<j)swap(A[i],A[j]);
        } while (i<j);
        
        swap(A[l],A[j]);
        return j;
    }
    void quicksort(int A[], int l,int h)
    {
        if(l<h)
        {
            j = partition(A,l,h);
            quicksort(A,l,j);
            quicksort(A,j+1,h);
        }
    }
};

int main()
{
    int A[] = {0,3,4,5,45,95,7,2,64,47}, n= sizeof(A)/sizeof(A[0]);
    quick q;

    q.quicksort(A,0,(sizeof(A)/sizeof(A[0])));
    
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}