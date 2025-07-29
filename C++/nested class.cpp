#include <iostream>

using namespace std;

class A
{
public:
    class B
    {
    private:
        int num;

    public:
        B()
        {
            num=73;
        }

        void display()
        {
            cout<<"number="<<num<<endl;
        }
    };
};

int main()
{
    cout<<"Nested classes in c++"<<endl;
    A::B obj;
    obj.display();
    return 0;
}
