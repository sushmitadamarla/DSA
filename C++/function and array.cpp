#include<iostream>

using namespace std;

void display(int A[5])
{
    cout<<"Displaying marks of students"<<endl;
    int i;

    for(i=0;i<5;++i)
    {
        cout<<"Student "<<i+1<<":"<<A[i]<<endl;
    }
}

int main()
{
    int A[5]={69,45,90,74,23};

    display(A);

    return 0;
}
