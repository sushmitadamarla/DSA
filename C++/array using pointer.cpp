#include <iostream>

using namespace std;

int main()
{
    int i;
    int a[]={1,3,5,7,9};

    int *p=&a[0];

    cout<<"The values of array are:"<<endl;
    for (i=0;i<5;i++)
    {
        cout<<*p<<endl;
        *p++;
    }
    return 0;

}
