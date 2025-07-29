#include <iostream>

using namespace std;

int multiply(int a,int b)
{
    return a*b;
}

int main()
{
    int (*func)(int,int);

    func=multiply;

    int prod=func(9,4);
    cout<<"Product="<<prod<<endl;

    return 0;
}
