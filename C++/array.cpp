#include <iostream>

using namespace std;

int main()
{
    int A[]={43,76,45,17,5,24};
    int sum=0,count=0,avg;

cout<<"Elements in Array:"<<endl;

    for(int n:A)
    {
        cout<<n<<endl;

        sum+=n;

        ++count;

    }
    cout<<"Sum is:"<<sum<<endl;
    avg=sum/count;

    cout<<"Average is:"<<avg<<endl;

}
