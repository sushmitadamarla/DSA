#include <iostream>

using namespace std;

int main()
{
    int n,i,fact=1;

    cout<<"Enter a no."<<endl;
    cin>>n;

    if (n<0)
    {
        cout<<"Enter positive no."<<endl;
    }

    else
    {
        for (i=1;i<=n;i++)
        {
            fact=fact*i;
        }

        cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    }

    return 0;
}
