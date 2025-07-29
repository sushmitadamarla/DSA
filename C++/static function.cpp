#include <iostream>

using namespace std;

class A
{
public:
    static void display()
    {
        cout<<"OOP"<<endl;
    }
};

int main()
{
    A::display();

    return 0;
}

