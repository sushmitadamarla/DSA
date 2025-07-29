#include <iostream>

using namespace std;

void display()
{
    static int count=0;
    int i;
    for(i=0;i<5;i++)
    {
        cout<<count<<endl;
        count++;
    }
}

int main()
{
    display();
    return 0;
}
