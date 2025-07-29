#include <iostream>

using namespace std;

void display(char='*',int n=5);

void display(char c, int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<c<<endl;
    }
   cout<<endl;
}

int main()
{
    cout<<"No arguments are passed"<<endl;
    display();

    cout<<"1 argument is passed"<<endl;
    display('$');

    cout<<"All arguments are passed"<<endl;
    display('#',8);

    return 0;
}



