#include<iostream>

using namespace std;

int main()
{
    char A[] = "python";
    char B[7];

    int i,j;

    for(i=0;A[i];i++)
    {}
    i=i-1;
    for(j=0;i>=0; j++,i--)
    {
        B[j] = A[i];
    }

    cout<<B;
}