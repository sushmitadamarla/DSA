#include <iostream>

using namespace std;

class A
{
private:
    int private_var;
protected:
    int protected_var;
public:
    A()
    {
        private_var=45;
        protected_var=78;
    }
    friend void display(A &t);
};

void display(A &t)
{
    cout<<"Private variable="<<t.private_var<<endl;
    cout<<"Protected Variable="<<t.protected_var<<endl;
}

int main()
{
    A a;
    display(a);

    return 0;
}
