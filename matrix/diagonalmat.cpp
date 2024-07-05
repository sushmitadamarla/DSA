#include<iostream>
using namespace std;

class Matrix
{
    private:
    int A[10];
    int n;

    public:
    Matrix(int size)
    {
        n=size;
    }

    void set(int i, int j, int x)
    {
        if(i==j)
        {
            A[i-1]=x;
        }
    }

    int get(int i,int j)
    {
        if(i==j)
        {
            return A[i-1];
        }
        else
        {
            return 0;
        }
    }

    void display()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    cout<<A[i]<<" ";
                }
                else
                {
                    cout<<"0"<<" ";
                }
            }
            cout<<endl;
        }
    }
};

int main()
{
    Matrix m(4);

    m.set(1,1,4);
    m.set(2,2,6);
    m.set(3,3,74);
    m.set(4,4,7);

    cout<<m.get(4,4)<<endl;

    m.display();

    return 0;
}