#include<iostream>

using namespace std;

class Addition
{
private:
    int a,b,c;
public:
    int sum(int,int);
    void display();
};

int Addition::sum(int a,int b)
{
    c=a+b;
    return c;
}

void Addition::display()
{
    cout<<"Addition is "<<c<<endl;
}

int main()
{
    Addition a;
    a.sum(12,89);
    a.display();
    return 0;
}
