#include <iostream>

using namespace std;

class A
{
private:
    int x;
public:
    void display()
    {
        int x;
        x=20;
        this->x=x;
        cout<<"x="<<x<<endl;
    }
};

int main()
{
    A a;
    a.display();
    return 0;
}
