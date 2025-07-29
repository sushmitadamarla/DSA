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
         private_var=34;
         protected_var=90;
    }

    friend class B;
};

class B
{
public:
  void display(A &t)
  {
      cout<<"Private variable="<<t.private_var<<endl;
      cout<<"Protected variable="<<t.protected_var<<endl;
  }
};

int main()
{
    A a;
    B b;
    b.display(a);

    return 0;
}
