#include <iostream>

using namespace std;

struct array
{
    int *A;
    int length;
    int size;
};

void display(struct array a)
{
    int i;
    cout<<"Elements are"<<endl;
    for(i=0;i<a.length;i++)
    {
        cout<<a.A[i];
    }
}

int main()
{
    struct array a;
    int n,i;
    cout<<"Enter size of array"<<endl;
    cin>>a.size;
    a.A=new int;
    a.length=0;

    cout<<"Enter no. of Elements"<<endl;
    cin>>n;

    cout<<"Enter all Elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a.A[i];
        a.length=n;
    }

    display(a);


    return 0;
}
