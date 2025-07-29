#include <iostream>

using namespace std;

class Kit
{
public:
    Kit()
    {
        cout<<"Constructor executed"<<endl;
    }

    ~Kit()
    {
        cout<<"Destructor executed"<<endl;
    }
};

int main()
{
    Kit k;
    return 0;
}
